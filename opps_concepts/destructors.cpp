//C++ program to explain destructors

//Destructo is another special member function that is called by the compiler when
//the scope of the object ends.

#include<iostream>
using namespace std;

class machine{
public:
  unsigned int id;

  //Defination of destructors
  ~machine()
  {
    std::cout << "Destructor called for Id: "<< id << '\n';
  }
};

int main(){
  machine drill;
  drill.id=7;
 int i = 0;
  while(i<5){
    machine trimmer;
    trimmer.id=i;
    i++;
  }//scope for trimmer ends here
  return 0;
}//scope for drill ends here
