//C++ code to demonstrate local variable
#include<iostream>
using namespace std;

void student_age(){
  //local variable age
int age=0;
age +=5;
std::cout << "student age : " << age << '\n';
}

//Driver code
int main(){
student_age();
}
