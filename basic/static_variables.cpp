//C++ program to demonstrate the use of static variables

#include<iostream>
using namespace std;

class Marks {
public:
  static int studentNumber;

  Marks()
  {
    //Modify the class variable
    studentNumber++;
  }
};

int Marks::studentNumber = 0;

int main(){

  Marks obj;
  Marks student;
//Now display the static variable
//can be done directy as
//using class name
std::cout << "Student Number " << '\n';
std::cout << Marks::studentNumber << '\n';

Marks();
Marks();

std::cout << "Student Number " << '\n';
std::cout << Marks::studentNumber << '\n';

std::cout << "Student Number " << '\n';
std::cout << obj.studentNumber << '\n';

Marks();

std::cout << "Student Number " << '\n';
std::cout << student.studentNumber << '\n';

return 0;
}
