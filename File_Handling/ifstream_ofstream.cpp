/*
File handling with C++ using ifstream and ofstream class object
To write the content of the file and to read the content of the File
*/

#include<iostream>

//fstream header file for ifstream,ofstream and fstream classes
#include<fstream>

using namespace std;

int main(){
  //Creation of ofstream object
  ofstream file_out;

  string line;

  //By default ios::out mode automatically deleted the content of the fileout
  //to append the content open ios::app
  //fileout.open("filename.txt",ios::app);
  file_out.open("sample_data.txt");

  while(file_out){
    //Read a line from standard input
    getline(cin,line);

    //Press -1 to exit
    if(line == "-1")
    break;

    //write line in file
    file_out << line << endl;
  }
  file_out.close();

  //Creation of ifstream class object to read the file
  ifstream file_in;

  //By default open mode ios::in mode
  file_in.open("sample_data.txt");

  //Execute a loop till end of file
  while(file_in){
    //Read a line from file
    getline(file_in,line);

    //print line in ouput console
    std::cout << line << '\n';
  }
  file_in.close();

return 0;
}
