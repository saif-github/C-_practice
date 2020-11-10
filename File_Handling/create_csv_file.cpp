
/*
Csv is a simple file format used to store tabular data such as spreadsheet or database.
CSV stands for Comma seprated values.
The data fields in csv file are seperated /delimited by comma and individual rows are seperated by newline.
*/
#include<iostream>
#include<fstream>
using namespace std;

void create(){

  fstream fout;

  fout.open("report_card.csv",ios::out | ios::app);

  std::cout << "Enter the details of 5 students :"
            << "Roll name maths phys chem bio"
            <<'\n';

  unsigned int i,Roll,phy,chem,math,bio;
  string name;

  for(i = 0;i < 5;i++){
    std::cin >> Roll
            >> name
            >>math
            >>phy
            >>chem
            >>bio;

    //Insert the data to file
    fout << Roll << ", "
          << name << ", "
          << math << ", "
          << phy << ", "
          << chem << ", "
          << bio
          << " \n";
  }
}

int main(){

  create();

  return 0;
}
