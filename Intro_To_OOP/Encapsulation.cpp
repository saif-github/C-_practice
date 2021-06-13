// Encapsulation
#include <iostream>

/*
Encapsulation is the grouping together of data and logic into a single unit.
In object-oriented programming, classes encapsulate data and functions that operate on that data.

*/
class Encapsulation {
  private:
    int x;  // data encapsulated (hidden) within the class

  public:
    void Set(int a)  // interface to set the value of variable x
    {
      x = a;
    }
/*
const specifier:
EX :   int Get () const { return x; }
Accessors should only retrieve data. They should not change the data stored in the object.
The main role of the const specifier in accessor methods is to protect member data.
When you specify a member function as const, the compiler will prohibit that function
from changing any of the object's member data.
*/
    int Get() const // interface to get the value of variable x
    {
      return x;
    }
};

//a function Encapsulation test(Encapsulation& data) probably does not need to be encapsulated as a class member.
// It can exist outside the Encapsulation class.
Encapsulation test(Encapsulation& data)
{
  int temp = 1 + data.Get();
  data.Set(temp);
  return data;
}

int main()
{
  Encapsulation obj;
  obj.Set(5);
  std::cout << obj.Get() << "\n";
  test(obj);
  std::cout << obj.Get() << "\n";
}
