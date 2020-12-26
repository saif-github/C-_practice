/*
Consider a class derived from another class with default constructor, or
a class containing another class object with default constructor. The compiler needs to insert code to call
 the default constructor of base class.
 */

 #include <iostream>
 using namespace std;

 class Base{
 public:
   //Compiler "declares " constructor
 };

 class A {
 public:
   //User defined constructor
   A()
   {
     std::cout << "A constructor" << '\n';
   }
   //uninitialized
   int size;
 };

 class B : public A{
   //compiler defines default constructor of B , and
   //insert stub to call A constructor

   //Compiler won't initialize any data of A
 };

 class C : public A{
 public:
   //compiler defines default constructor of C , and
   //insert stub to call A constructor

   C()
   {
     std::cout << "C constructor" << '\n';
   }
 };

 class D : public A{
 public:
   //compiler defines default constructor of D, and
   //insert stub to call A constructor

   D()
   {
     std::cout << "D constructor" << '\n';
   }
 private:
   A a;
 };

 int main(){
   Base base;

   B b;
   C c;
   D d;

   return 0;
 }
