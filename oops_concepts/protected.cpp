/*
The protected class is similar to the private class only difference is the class members
declared as protected can be accesses by any subclass of that class aswell
*/

//C++ program to demonstrate protected access modifiers.
#include<iostream>
using namespace std;

class parent{
protected:
  int Id_protected;
};

class child : public parent
{
public:
  void set(int x){

    //Child class is able to access the inherited protected
    //data members of the base class.
    Id_protected=x;
  }
  int get(void)
  {
    return Id_protected;
  }
};

int main(){
  child obj;

  obj.set(20);

  //std::cout << obj.Id_protected << '\n'; //FAIL : protected calss cannot be accessed by other functions.

  std::cout << "Id_protected="<< obj.get() << '\n';

  return 0;
}
