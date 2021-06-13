/*

Namespaces :

  Namespaces allow programmers to group logically related variables and functions together.
  Namespaces also help to avoid conflicts between to variables that have the same name
  in different parts of a program.


  In this example, we have two different void Hello() functions.
  If we put both of these functions in the same namespace,
  they would conflict and the program would not compile.
  However, by declaring each of these functions in a separate namespace,
  they are able to co-exist. Furthermore, we can specify which function to call by prefixing Hello()
  with the appropriate namespace, followed by the :: operator.
*/

#include<iostream>

 namespace English {
 void Hello() { std::cout << "Hello, World!\n"; }
 }  // namespace English

 namespace Spanish {
 void Hello() { std::cout << "Hola, Mundo!\n"; }
 }  // namespace Spanish

 namespace Urdu {
 void Hello() { std::cout << "السلام عليكم \n"; }
}  // namespace URDU

 int main() {
   English::Hello();
   Spanish::Hello();
   Urdu::Hello();
 }

/*

std Namespace

You are already familiar with the std namespace, even if you didn't realize quite what it was.
std is the namespace used by the C++ Standard Library.

Classes like std::vector and functions like std::sort are defined within the std namespace.
*/
