
// C++ program to generate random numbers
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define LEFT  (1<<0)
#define RIGHT (1<<1)
#define UP    (1<<2)
#define DOWN  (1<<3)
#define ALL   (0xF)
#define NONE  (0X0)

static unsigned int rand_word(unsigned int lower,unsigned int upper){

  // This program will create different sequence of
  // random numbers on every program run

  // Use current time as seed for random generator
  //srand(time(0));

  return (rand() % (upper - lower + 1)) + lower;
}

static unsigned int set_random_vetices(unsigned int **arr ,unsigned int rows , unsigned int cols)
{
  unsigned int Max_rand = 0;
  unsigned int vertices_count = 0;

  for(int i = 0;i<rows; i++) {
    //std::cout << "i = " << i;
      Max_rand = rand_word(0,(rows+cols)/4);
      //std::cout << "MAX rand = "<< Max_rand << '\n';
      for(int count =0; count < Max_rand; count++){
          int j = rand() % (cols-1);
        //  std::cout << " j = " << j << endl;
          *(*(arr + i) + j) = 1;
      }
      vertices_count += Max_rand;
  }
  return vertices_count;
}


class straight_vertex
{
public:
  unsigned int x,y;
  unsigned char dbit: 4;

  straight_vertex(unsigned int X,unsigned int Y)
  {
    x=X;y=Y;
    dbit = NONE;
  }

  //copy constructor
  straight_vertex(const straight_vertex &Vertex)
  {
    x = Vertex.x;
    y = Vertex.y;
  }
};

typedef struct vertex{
  unsigned int x,y;
}g_vertex;

typedef struct line
{
  unsigned int size;
  g_vertex vertex1;
  g_vertex vertex2;
}g_line;

static g_line straight_scan(unsigned int **arr,unsigned int rows , unsigned int cols,straight_vertex* utemp)
{
  g_line line1;
  bool sflag = 0;
  int j =0;

  line1.vertex1.x = utemp->x;
  line1.vertex1.y = utemp->y;
  line1.size = 0;

switch (utemp->dbit) {
  case RIGHT:
          do{

            for (j = line1.vertex1.y; j < cols; j++)
            {
              if(*(*(arr + line1.vertex1.x)+j) == 1)
              {
                line1.vertex1.y = j;
                std::cout << " i = " << line1.vertex1.x ;
                std::cout << " j = " << line1.vertex1.y << endl;
                line1.vertex2.y = line1.vertex1.y + 1;
                break;
              }
              else{
                  sflag = 0;
              }
            }

            for (j = line1.vertex2.y ; j < cols; j++)
            {
              if(*(*(arr + line1.vertex1.x)+j) == 1)
              {
                line1.vertex2.y = j;
                std::cout << " i = " << line1.vertex1.x ;
                std::cout << " j = " << line1.vertex2.y << endl;
                break;
              }
              else{
                  sflag = 0;
              }

              if((line1.vertex2.y - line1.vertex1.y) > 1)
              {
                sflag = 0;
                line1.size = line1.vertex2.y - line1.vertex1.y;
                std::cout << "DO nothing 1" << '\n';
              }
              else if(j == cols)
              {
                sflag = 0;
                std::cout << "DO nothing 2" << '\n';
              }
              else{
                sflag = 1;
                std::cout << " line1.vertex1.y = " << line1.vertex1.y;
                line1.vertex1.y = line1.vertex2.y ;
              }
            }


          }while(sflag);
    break;

    case DOWN:
    break;

    default:
    std::cout << "DO nothing" << '\n';

}


  std::cout << "Size = " << line1.size << '\n';

  return line1;
}

static unsigned  int scan_for_isosceles(unsigned int **arr,unsigned int rows , unsigned int cols)
{
  straight_vertex *temp1 = new straight_vertex(0,0);
  straight_vertex *temp2 = new straight_vertex(0,0);
  straight_vertex *temp3 = new straight_vertex(0,0);

  temp1->dbit = RIGHT;
  straight_scan(arr,rows,cols,temp1);

  return 0;
}

// Driver program
int main(void)
{
  unsigned int *p = NULL;
  unsigned M = 0, N = 0;

  std::cout << "Enter the size of 2D array as m x n " << '\n';
  std::cout << "No of rows M : ";
  std::cin >> M;
  std::cout << endl;
  std::cout << "No of columns N : ";
  std::cin >> N;
  std::cout << endl;

  // dynamically create array of pointers of size M
  unsigned int** A = new unsigned int*[M];

  if(!A)
  {
    std::cout << "allocation of memory failed" << '\n';
  }

  // dynamically allocate memory of size N for each row
  for (int i = 0; i < M; i++)
      A[i] = new unsigned int[N];

  // assign values to allocated memory
  for (int i = 0; i < M; i++)
      for (int j = 0; j < N; j++)
          A[i][j] = 0;

  // print the 2D array
  for (int i = 0; i < M; i++)
  {
      for (int j = 0; j < N; j++)
          std::cout << A[i][j] << " ";

      std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << "No of verticies randomly generated : " <<   set_random_vetices(A,M,N) << '\n';
  std::cout << std::endl;
  // print the 2D array
  for (int i = 0; i < M; i++)
  {
      for (int j = 0; j < N; j++)
          std::cout << A[i][j] << " ";

      std::cout << std::endl;
  }

  //straight_scan(A,M,N);
  scan_for_isosceles(A,M,N);

  // deallocate memory using delete[] operator
  for (int i = 0; i < M; i++)
      delete[] A[i];

return 0;
}
