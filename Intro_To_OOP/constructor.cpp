#include<iostream>

/*
Constructors

Constructors are member functions of a class or struct that initialize an object.
The Core Guidelines define a constructor) as:

constructor:
an operation that initializes (“constructs”) an object.
Typically a constructor establishes an invariant and often acquires resources
needed for an object to be used (which are then typically released by a destructor).

A constructor can take arguments, which can be used to assign values to member variables.
*/

class Date {
 public:
  Date(int d, int m, int y) {  // This is a constructor.
    Day(d);
  }
  int Day() const { return day_; }
  void Day(int d) {
    if (d >= 1 && d <= 31) day_ = d;
  }
  int Month() const { return month_; }
  void Month(int m) {
    if (m >= 1 && m <= 12) month_ = m;
  }
  int Year() const { return year_; }
  void Year(int y) { year_ = y; }

 private:
  int day_{1};
  int month_{1};
  int year_{0};
};

int main()
{
  Date date(12,1,2020);

  std::cout << "Day : "<< date.Day() << '\n';
  date.Day(22);
  std::cout << "Day : "<< date.Day() << '\n';
}


/*

Default Constructor

A class object is always initialized by calling a constructor.
That might lead you to wonder how it is possible to
initialize a class or structure that does not define any constructor at all.

For example:

class Date {
  int day{1};
  int month{1};
  int year{0};
};
We can initialize an object of this class,
even though this class does not explicitly define a constructor.


*/
