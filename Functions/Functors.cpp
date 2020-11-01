/*
Functors are the objects that can be treated as though they are function or
function pointers.
*/

//A C++ program uses transform() in STL to add // 1 to all elements of arr[]

#include<bits/stdc++.h>
using namespace std;

int increment(int x){ return (x+1);}

int main()
{
  int arr[]={1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);

  //Apply increment to all elements of arr[]
  //and store the modified elements back in arr[]
  transform(arr,arr+n,arr,increment);

  for(int i=0;i<n;i++)
  std::cout << arr[i] << '\n';

  return 0;
}
