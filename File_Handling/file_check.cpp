//Write a c++ program to create a file using file handling and check whether
//the file is created successfully or not.

#include<iostream>
#include<fstream>

using namespace std;

int main(){
  fstream file;

  file.open("database.txt",ios::out);

  if(!file){
    std::cout << "Error in creating file !!" << '\n';
    return 0;
  }
  std::cout << "File created successfully" << '\n';

  //remove("database.txt");

  file.close();

  return 0;
}
