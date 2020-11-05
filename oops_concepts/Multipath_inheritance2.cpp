//Avoiding ambiguity using virtual base classes

#include<iostream>
using namespace std;

class ClassA
{
public:
  int a;
};

class ClassB : virtual public ClassA
{
public:
  int b;
};

class ClassC : virtual public ClassA
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

  obj.a = 10; //statement 3
  obj.a = 20; //statement 4

  obj.b = 40;
  obj.c = 50;
  obj.d = 60;

  std::cout << "ClassA member in classB = " << obj.a <<'\n';
  std::cout << "ClassA member in classc = " << obj.a <<'\n';

  std::cout << "B = " << obj.b <<'\n';
  std::cout << "c = " << obj.c <<'\n';
  std::cout << "D = " << obj.d <<'\n';

  return 0;
}
//ClassD has only one copy of ClassA, therefore statement 4 overwrites statement 3
