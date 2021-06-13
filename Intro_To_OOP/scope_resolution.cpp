#include<iostream>

/*
Scope Resolution

C++ allows different identifiers (variable and function names) to have the same name,
as long as they have different scope.
For example, two different functions can each declare the variable int i,
because each variable only exists within the scope of its parent function.

In some cases, scopes can overlap, in which case the compiler may need assistance
in determining which identifier the programmer means to use.
The process of determining which identifier to use is called "scope resolution".
Scope Resultion Operator :: is the scope resolution operator.
We can use this operator to specify which namespace or class to search in order to resolve an identifier.

Person::move(); \\ Call the move the function that is a member of the Person class.
std::map m; \\ Initialize the map container from the C++ Standard Library.
*/

class Date {
 public:
  Date(int d, int m, int y);  // This is a constructor.

  int Day() const { return day_; }
  void Day(int day);  // Declare member function Date::Day().

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

//scope resolution for constructor function
Date::Date(int d,int m,int y) {
  Day(d);
  Month(m);
  Year(y);
}

// Define member function Date::Day().
void Date::Day(int day) {
  if (day >= 1 && day <= 31) Date::day_ = day;
}

int main()
{
  Date date(12,1,2020);

  std::cout << "Day : "<< date.Day() << '\n';
  date.Day(22);
  std::cout << "Day : "<< date.Day() << '\n';
}
