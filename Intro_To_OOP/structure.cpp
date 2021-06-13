//Include iostream for output
#include <cassert>
#include <iostream>

/*
struct Point {   // Good: concise
    int x {0};   // public member variable with a default initializer of 0
    int y {0};   // public member variable with a default initializer of 0
};

Accessors And Mutators

To access private members, we typically define public "accessor" and "mutator" member functions
(sometimes called "getter" and "setter" functions).

struct Date {
 public:
  int Day() { return day; }  //accessor
  void Day(int day) { this.day = day; }  //mutator
  int Month() { return month; }
  void Month(int month) { this.month = month; }
  int Year() { return year; }
  void Year(int year) { this.year = year; }

 private:
  int day{1};
  int month{1};
  int year{0};
};

By convention, programmers use structures when member variables are independent of each other,
and use classes when member variables are related by an "invariant".

complation cmd > g++ -std=c++17 structure.cpp -o exe
*/

//Define a simple structure
struct Date {
  int day;
  int month;
  int year;
};

//Define a mian function to instantiate and test
int main()
{
  Date date;

  date.day = 10;
  date.month = 11;
  date.year = 1993;

  //To int Date::day date to November 10,1993
  assert(date.day == 10);
  assert(date.month == 11);
  assert(date.year == 1993);

  std::cout << date.day<< "/" << date.month << "/"<< date.year << '\n';
}
