// C++ program to redirect Cout to a file
#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main(){
  fstream file ;
  file.open("cout.txt",ios::out);
  string line;

  //backup stream buffers of cout
  streambuf* stream_buffer_cout = cout.rdbuf();
  streambuf* stream_buffer_cin = cin.rdbuf();

  //get the stream buffer of file
  streambuf* stream_buffer_file = file.rdbuf();

  //Redirect cout to file
  cout.rdbuf(stream_buffer_file);

  cout << "This line written to file" << endl;

  //Redirect cout back to screen
  cout.rdbuf(stream_buffer_cout);
  cout << "This line written to screen" << endl;

  file.close();
  return 0;
}
