/*
Initializer Lists

Initializer lists initialize member variables to specific values,
just before the class constructor runs.
This initialization ensures that class members are automatically initialized when an instance of the class is created.

Date::Date(int day, int month, int year) : year_(y) {
  Day(day);
  Month(month);
}

*/
#include<iostream>

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

//Initializer Lists - year_(y)
Date::Date(int day, int month, int year) : year_(year) {
  Day(day);
  Month(month);
}

// Define member function Date::Day().
void Date::Day(int day) {
  if (day >= 1 && day <= 31) Date::day_ = day;
}

int main()
{
  Date date(12,1,2020);

  std::cout << "Day : "<< date.Year() << '\n';
  date.Year(2022);
  std::cout << "Day : "<< date.Year() << '\n';
}
