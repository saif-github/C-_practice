/*

A derived class with two base classes and
these two base classes have one common base class is called multipath inheritance

An ambiguity can araise in this type of inheritance
*/

//C++ program to demonstrate ambiguity in multipath inheritance
#include <iostream>
using namespace std;

class ClassA
{
public:
  int a;
};

class ClassB : public ClassA
{
public:
  int b;
};

class ClassC : public ClassA
{
public:
  int c;
};

class ClassD : public ClassB,public ClassC
{
public:
  int d;
};

int main()
{
  ClassD obj;

//Avoiding ambiguity using scope resolution operator
  obj.ClassB::a = 19;
  obj.ClassC::a = 23;

  obj.c = 12;
  obj.d = 42;
  obj.b = 56;

  cout<< "\n A from ClassB  : "<< obj.ClassB::a;
   cout<< "\n A from ClassC  : "<< obj.ClassC::a;

   cout<< "\n B : "<< obj.b;
   cout<< "\n C : "<< obj.c;
   cout<< "\n D : "<< obj.d;

   std::cout << endl;

return 0;
}
