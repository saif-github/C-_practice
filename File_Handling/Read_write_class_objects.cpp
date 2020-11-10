//C++ program to demonstrate read/write of class objects in C++
#include<iostream>
#include<fstream>

using namespace std;

//Class to define the properties
class Player{
public:
  string Name;
  unsigned int Age;
  unsigned int Rating;

  int input();

  int output_highest_rated();
};

int Player::input()
{
  ofstream file_obj;

  file_obj.open("input.txt");

  Player obj;

  string str1 = "Virat";
  unsigned int Age1 = 32;
  unsigned int Rating1 = 10000;

  obj.Name = str1;
  obj.Age = Age1;
  obj.Rating = Rating1;

  file_obj.write((char*)&obj,sizeof(obj));

  string str2 = "Smith";
  unsigned int Age2 = 32;
  unsigned int Rating2 = 9000;

  obj.Name = str2;
  obj.Age = Age2;
  obj.Rating = Rating2;

  file_obj.write((char*)&obj,sizeof(obj));
  file_obj.close();

return 0;
}

int Player::output_highest_rated()
{
  ifstream file_obj;

  file_obj.open("Input.txt",ios::in);

  Player obj;

  //Reading from file into object "obj"
  file_obj.read((char*)&obj,sizeof(obj));

  //Max to store maximum Rating
  unsigned int max = 0;

  //Highest rates stores the name of highest rated contestent
  string Highest_rated;

  //Checking till we have the feed
  while(!file_obj.eof()){
    //Assign maximum ratings
    if(obj.Rating > max){

      max = obj.Rating;
      Highest_rated = obj.Name;
    }
    file_obj.read((char*)&obj,sizeof(obj));
  }

  std::cout << "The highest rated Player is "<< Highest_rated << '\n';

  file_obj.close();

return 0;
}

int main(){
  Player obj_player;

  obj_player.input();

  obj_player.output_highest_rated();

  return 0;
}
