/*

Overloading

In C++, you can write two (or more) versions of a function with the same name.
This is called "overloading". Overloading requires that we leave the function name the same,
 but we modify the function signature.
For example, we might define the same function name with multiple different
configurations of input arguments.

This example of class Date overloads:
*/
#include<iostream>
#include<ctime>

class Date {
public:
    Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}
    Date(int day, int month) : day_(day), month_(month)  // automatically sets the Date to the current year
    {
        time_t t = time(NULL);
        tm* timePtr = localtime(&t);
        year_ = timePtr->tm_year;
    }

    int get_year(void) const{
      return year_;
    }

private:
    int day_;
    int month_;
    int year_;
};

int main()
{
  Date date(10,6);

  std::cout <<  date.get_year() << '\n';
}
