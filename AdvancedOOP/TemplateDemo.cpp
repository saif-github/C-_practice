/*

Templates :

Templates enable generic programming by generalizing a function to apply to any class.
Specifically, templates use types as parameters so that the same implementation can operate on different data types.

For example, you might need a function to accept many different data types.
The function acts on those arguments, perhaps dividing them or sorting them or something else.
Rather than writing and maintaining the multiple function declarations,
each accepting slightly different arguments, you can write one function and pass the argument types as parameters.
At compile time, the compiler then expands the code using the types that are passed as parameters.


example:

Because Sum() is defined with a template, when the program calls Sum() with doubles as parameters,
the function expands to become:

double Sum(double a, double b) {
    return a+b;
}
*/

#include<iostream>

template <typename Type> Type sum(Type a,Type b){ return a + b;}

//Alternate to typename is class and Type is user defined
//template <class type> type sum(type a,type b){ return a + b;}

int main(void)
{
  std::cout << "Type double : "<< sum<double>(20.3,14.5) << '\n';

  std::cout << "Type int : "<< sum<int>(20.3,14.5)  << '\n';

  std::cout << "Type char : "<< sum<char>('a','b')  << '\n';

  return 0;
}

//You might recognize this form as the same form used to construct a vector.
//That's because vectors are indeed a generic class!
