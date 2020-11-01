#include <iostream>
using namespace std;

//A function with default argument ,it can be called with
//2 arguments or 3 arguments or 4 arguments
int sum(int x,int y,int z=0,int w=0)
{
  return (x+y+z+w);
}

int main()
{
  std::cout << sum(10,15) << '\n';
  std::cout << sum(10,20,30,40) << '\n';
  std::cout << sum(10,15,25) << '\n';
return 0;
}
.
