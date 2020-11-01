//C++ program to demonstrate the dynamic allocation and deallocation
// of memory using new and delete operators

#include<iostream>
using namespace std;

int main(){
 int *p = NULL;

 // request memory for the variable using new operators
p = new(nothrow) int;

if(!p)
{
  std::cout << "allocation of memory failed" << '\n';
}
else{
  //store the value at allocated address
  *p = 29;
  std::cout << "value of P =" << *p << '\n';
}

//Request block of memory using new operators
float *r = new(nothrow) float(75.04);
if(!r)
{
  std::cout << "allocation of memory failed" << '\n';
}
else{
  std::cout << "value of r =" << *r << '\n';
}

//Request the block of memory as n size
int n=5;
int *q = new(nothrow) int[n];

if(!q)
  std::cout << "allocation of memory failed" << '\n';
else
{
  for(int i =0;i < n; i++)
  q[i]=i+1;

  std::cout << "values store int the block of memory" << '\n';
  for(int i =0;i < n;i++)
  std::cout << q[i] << ' ';

  std::cout << '\n';
}

//free the allocated memory
delete p;
delete r;

//free the block of allocated memory
delete[] q;

return 0;
}
