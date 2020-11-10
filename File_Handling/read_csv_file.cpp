/*
Note : since we are reading data from the file,
is stored in string format,so always convert string to required data type.
before comparing or calculating
*/

#include<iostream>
#include<fstream>
#include<vector>
#include <sstream>
#include<string>

using namespace std;

void read_record(){
  fstream fin;

  fin.open("report_card.csv",ios::in);

  unsigned int rollnum,roll2,count = 0;

  std::cout << "Enter the roll no of student to display details :" << '\n';
  std::cin >> rollnum;
  std::cout  << endl;

  vector <string> row;
  string line,temp;
  string intermediate;

  while(fin >> temp){
    row.clear();

    getline(fin,line);

    stringstream s(line);

    while(getline(s,intermediate,',')){
      //std::cout << intermediate << '\n';
      row.push_back(intermediate);
    }

    //convert string to integer for comparision
    roll2 = stoi(row[0]);

    //compare the roll number
    if(roll2 == rollnum){
      count = 1;
      std::cout << "Details of the Roll number ="<< row[0] << '\n';
      std::cout << "Name :"<< row[1] << '\n';
      std::cout << "Maths :"<< row[2] << '\n';
      std::cout << "physics"<< row[3] << '\n';
      std::cout << "Chemestry :"<< row[4] << '\n';
      std::cout << "Biology"<< row[5] << '\n';
      break;
    }
  }
  if(count == 0)
  std::cout << "Record not found" << '\n';
}

int main(){

  read_record();

  return 0;
}
