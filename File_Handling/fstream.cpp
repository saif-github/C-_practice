/*
File Handling in C++ using fstream class object
To write the content of the file then to read the content of the file
*/
#include<iostream>

//fstream header file for ifstream , ofstream and fstream
#include<fstream>

using namespace std;

int main(){
  //Creation of fstream class object
  fstream file_io;

  string line;

  //by default open mode = ios::out | ios::in mode automaticaly overwrites the content of file
  //To append the content , open in ios::app  >> file_io.open("stream_io.txt",ios::in | ios::out | ios::app);
  //To truncate the content , open in ios::trunc >> file_io.open("stream_io.txt",ios::in | ios::out | ios::trunc);
 file_io.open("stream_io.txt",ios::in | ios::out | ios::trunc);

  while(file_io)
  {
    getline(cin,line);

    if(line == "-1")
      break;

    file_io<< line << endl;
  }
  //Execute a loop untill the end of file, point read pointer at the begining of file.
  file_io.seekg(0,ios::beg);

  while(file_io){
    //Read a line from file
    getline(file_io,line);

    //print line in console
    std::cout << line << '\n';
  }
  //close the file
  file_io.close();

  return 0;
}
