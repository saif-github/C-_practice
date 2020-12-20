/*
The pointer variable has multiple levels of indirection i.e. single pointer,
double pointer,triple pointer.where as , the reference variable has only single level of indirection.

 Once a reference is created, it cannot be later made to reference another object; it cannot be reseated.
 This is often done with pointers.

 References cannot be NULL.
*/

#include<iostream>
using namespace std;

int main(){
  int i=10;

  int *p = &i;    //single pointer
  int **p1 = &p;    //double pointer
  int ***p2 =&p1;   //triple pointer

  //All the above pointers differ in the value they store
  std::cout << "i=" << i << "\t" <<"p="<< p << "\t"<<
            << "p1=" << p1 <<"\t"<< "p2"<< p2 <<'\n';
  int a = 5;
  int &S =a;
  int &S0 =S;
  int &S1=S0;

  std::cout << "a="<< a <<  << '\n';
}
