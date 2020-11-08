/*
When an exception is thrown ,all objects inside the enclosing try block
are destructed before the control is transferred to catch block
*/

#include<iostream>
using namespace std;

class Test{
public:
  Test(){std::cout << "Constructor of the Test" << '\n';}
  ~Test(){std::cout << "Destructor of Test" << '\n';}
};

int main(){
  try{
    Test t1;
    throw 10;
  }
  catch(int i){
    std::cout << "caught "<< i << '\n';
  }
}
