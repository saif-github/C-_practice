//C++ program explains flow of exception of try/catch blocks

#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int x=-1;

  //Some code

  std::cout << "Before try" << '\n';
  try{
    std::cout << "Inside try" << '\n';
    if(x < 0)
    {
      throw x;
      std::cout << "After throw (never executes)" << '\n';
    }
  }

  catch(int x){
    std::cout << "exception cought" << '\n';
  }

  std::cout << "After catch (Will be executed)" << '\n';
  return 0;
}
