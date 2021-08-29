#include <algorithm>  // for sort
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::sort;
using std::string;
using std::vector;
using std::abs;

using namespace std;


/*
      NW    N    NE
            |
      W-----0-----E
            |
      SW    S    SE
*/

//g++ -std=c++14 step_5_A_star_complete.cpp -o exe
// TODO: Add kStart and KFinish enumerators to the State enum.
enum class State {kEmpty, kNode ,kClosed};

// directional deltas
const int delta_straight[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
const int delta_cross[4][2]{{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

class TNode{
    int _x;
    int _y;
    State _state;
  public:
    TNode(int x1 = 0,int y1 = 0,State state1 = State::kEmpty)
    {
      _x = x1;
      _y = y1;
      _state = state1;
    }
    void set_x(int x){
          _x=x;
    }
    void set_y(int y){
          _y=y;
    }

    void set_state(State nstate){
          _state=nstate;
    }
    int get_x(void)
    {
      return _x;
    }
    int get_y(void)
    {
      return _y;
    }

    State get_state(void)
    {
      return _state;
    }

    void clean_obj(void)
    {
      _x = 0;
      _y = 0;
      _state = State::kEmpty;
    }
};


vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') {
      if (n == 0) {
        row.push_back(State::kEmpty);
      } else {
        row.push_back(State::kNode);
      }
    }
    return row;
}


vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}


/**
 * Compare the F values of two cells.
 */
bool Compare(const vector<int> a, const vector<int> b) {
  int f1 = a[2] + a[3]; // f1 = g1 + h1
  int f2 = b[2] + b[3]; // f2 = g2 + h2
  return f1 > f2;
}


/**
 * Sort the two-dimensional vector of ints in descending order.
 */
void CellSort(vector<vector<int>> *v) {
  sort(v->begin(), v->end(), Compare);
}

/**
 * Check that a cell is valid: on the grid, not an obstacle, and clear.
 */
bool CheckValidCell(int x, int y, vector<vector<State>> grid) {
  bool on_grid_x = (x >= 0 && x < (grid.size()-1));
  bool on_grid_y = (y >= 0 && y < (grid[0].size()-1));
  if (on_grid_x && on_grid_y)
    return (grid[x][y] == State::kEmpty) || (grid[x][y] == State::kNode);
  return false;
}

/**
 * Add a node to the open list and mark it as open.
 */
void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openlist, vector<vector<State>> &grid) {
  // Add node to open vector, and mark grid cell as closed.
  openlist.push_back(vector<int>{x, y, g, h});
  grid[x][y] = State::kClosed;
}


// Calculate the manhattan distance
TNode Check_NS(int x1, int y1,vector<vector<State>> grid)
{
  TNode node;
  int x2 = x1 ;
  int y2 = y1 ;

while(CheckValidCell(x2,y2,grid))
{
  x2 = x2 + delta_cross[2][0];
  y2 = y2 + delta_cross[2][1];
  std::cout << x2 << " , "<< y2 << "\n";

  if(grid[x2][y2]==State::kNode)
  {
    node.set_x(x2);
    node.set_y(y2);
    node.set_state(grid[x2][y2]);
    return node;
  }
}
// We've haven't found a node in a path.
cout << "No node found!" << "\n";
  return TNode {};
}

// Calculate the manhattan distance
TNode Check_SE(int x1, int y1,vector<vector<State>> grid)
{
  TNode node;
  int x2 = x1 ;
  int y2 = y1 ;

while(CheckValidCell(x2,y2,grid))
{
  x2 = x2 + delta_cross[3][0];
  y2 = y2 + delta_cross[3][1];
  std::cout << x2 << " , "<< y2 << "\n";

  if(grid[x2][y2]==State::kNode)
  {
    node.set_x(x2);
    node.set_y(y2);
    node.set_state(grid[x2][y2]);
    return node;
  }
}
// We've haven't found a node in a path.
cout << "No node found!" << "\n";
  return TNode {};
}


int triangle_detection(vector<vector<State>> &grid,vector<vector<int>> openlist)
{
  TNode triangle_nodes[3];
  unsigned int side_1=0,side_2=0,side_3=0;
std::cout << openlist.size() << '\n';
  for(int index =0;index<openlist.size();index++){
      auto current = openlist[index];
      //auto current = openlist.front();
      std::cout << current[0]<< " , "<< current[1] << "\n";

      triangle_nodes[0].set_x(current[0]);
      triangle_nodes[0].set_y(current[1]);
      triangle_nodes[0].set_state(grid[current[0]][current[1]]);

      triangle_nodes[1] = Check_NS(current[0],current[1],grid);
      if(State::kNode == triangle_nodes[1].get_state())
      {
        side_1 = triangle_nodes[1].get_x() - current[0];
        std::cout << "Node detected" << '\n';
      }

      triangle_nodes[2] = Check_SE(current[0],current[1],grid);
      if(State::kNode == triangle_nodes[2].get_state())
      {
        side_2 = triangle_nodes[2].get_x() - current[0];
        std::cout << "Node detected" << '\n';
      }

      if(triangle_nodes[1].get_x() == triangle_nodes[2].get_x())
      {
        side_3 = triangle_nodes[2].get_y() - triangle_nodes[1].get_y();
      }
      if((side_1 > 0) && (side_2 > 0) && (side_3 > 0))
      {
        if((side_1 == side_2) &&  (side_2== side_3) && (side_1== side_3))
        {
          std::cout << "triangle is Equilateral" << '\n';
        }

        if(side_1 == side_2)
        {
          std::cout << "triangle is Isoceless" << '\n';
        }      
      }

      triangle_nodes[1].clean_obj();
      triangle_nodes[2].clean_obj();
      side_1=0;
      side_2=0;
      side_3=0;
  }
  return 0;
}


/*
vector<vector<State>> right_triangle_detection(vector<vector<State>> grid)
{
  // Create the vector of open nodes.
  vector<vector<int>> open {};


return grid;
}
*/

string CellString(State cell) {
  switch(cell) {
    case State::kNode: return "⛰   ";
    case State::kClosed: return "⯄   ";
    default: return "0   ";
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

void Node_detection(vector<vector<State>> grid,vector<vector<int>> &openlist) {

  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
        if(grid[i][j] == State::kNode)
        {
          openlist.push_back(vector<int>{i,j});
          auto current = openlist.back();
          std::cout << current[0]<< " , "<< current[1] << '\n';
        }
    }
  }
}

int main() {
  auto board = ReadBoardFile("sample");
  // Create the vector of open nodes.
  vector<vector<int>> openlist {};

  Node_detection(board,openlist);

  PrintBoard(board);

  triangle_detection(board,openlist);
}
