/*

Initializer lists exist for a number of reasons.
First, the compiler can optimize initialization faster from an initialization list
than from within the constructor.

A second reason is a bit of a technical paradox.
If you have a const class attribute, you can only initialize it using an initialization list.
Otherwise, you would violate the const keyword simply by initializing the member in the constructor!

*/

#include<iostream>

class Birthday {
 public:
  Birthday(int d, int m, int y);  // This is a constructor.

  int Day() { return day_; }
  int Month()  { return month_; }
  int Year()  { return year_; }

 private:
  int const day_;
  int const month_;
  int const year_;
};

//Initializer Lists - year_(y)
Birthday::Birthday(int day, int month, int year) : day_(day),month_(month),year_(year) { }

int main()
{
  Birthday date(10,11,1993);
  std::cout << date.Day() << "/" << date.Month() << "/" << date.Year()  << "\n";
}
