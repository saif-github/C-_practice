//Destructors are called only for constructed objects.
//When constructor of an object throws an exception , destructor for
//that object is not called.

#include<iostream>
using namespace std;

class Test{
  static int count;
  int id;
public:
  Test()
  {
    count++;
    id=count;
    std::cout << "Constructing object Number" << id <<'\n';
    if(id==4){
      throw 4;
    }
  }
  ~Test(){
    std::cout << "Destructo object number "<< id << '\n';
  }
};

int Test::count = 0;

int main(){

  try{
    Test array[5];
  }

  catch(int i ){
    std::cout << "Caught"<< i << '\n';
  }
}
