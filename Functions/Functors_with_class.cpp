//C++ program to demonstrate working of functors.

/*
To create a functor,we create a object that overloads the operator()
The line,
MyFunctor(10);

Is same as
MyFunctor.operator()(10);
*/

#include<bits/stdc++.h>
using namespace std;

//A Functors
class increment
{
private:
  int num;
public:
  increment (int n) : num(n){ }    // same as increment (int n){num = n;}

  //This operator overloading enables calling
  //operator function () on objects of increment
  int operator()(int arr_num) const {
    return num + arr_num;
  }
};

//Driver code
int main(){
  int arr[]={1,2,3,4,5};
  int n =sizeof(arr)/sizeof(arr[0]);
  int to_add = 5;

  transform(arr,arr+n,arr,increment(to_add));

  for(int i=0;i<n;i++)
  std::cout << arr[i] << ' ';

  std::cout << '\n';
}

/*
The inline
transform(arr,arr+n,arr,increment(to_add));

is same as writing below two lines,
//Creating object of increment
increment obj(to_add);

//Calling () on object
transsform(arr,arr+n,arr,obj);
*/
