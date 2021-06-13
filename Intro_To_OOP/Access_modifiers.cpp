#include <iostream>

/*
Accessors And Mutators

To access private members, we typically define public "accessor" and "mutator" member functions
(sometimes called "getter" and "setter" functions).

In the last example, you saw how to create a setter function for class member attributes.
Check out the code in the Notebook below to play around a bit with access modifiers as well as setter and getter functions!

Classes :

By convention, programmers use structures when member variables are independent of each other,
and use classes when member variables are related by an "invariant".

Invariants :

An "invariant" is a rule that limits the values of member variables.
For example, in a Date class, an invariant would specify that the member variable day cannot be less than 0.
 Another invariant would specify that the value of day cannot exceed 28, 29, 30, or 31, depending on the month and year.
Yet another invariant would limit the value of month to the range of 1 to 12.

*/


class Date {
    private:
        int day;
        int month;
        int year;

    public:
        void SetDate(int day, int month, int year);     //mutator
        int GetDay();       //accessor
        int GetMonth();     //accessor
        int GetYear();      //accessor
};

void Date::SetDate(int day, int month, int year)
{
    int day_numbers[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(year % 4 == 0 && year % 100 != 0 || year% 400 == 0)
        day_numbers[1]++;

    if(year < 1 || day < 1 || month < 1 || month > 12 || day > day_numbers[month - 1])
        throw std::domain_error("Invalid date!");

    Date::day = day;
    Date::month = month;
    Date::year = year;
}

int Date::GetDay()
{
    return day;
}

int Date::GetMonth()
{
    return month;
}

int Date::GetYear()
{
    return Date::year;
}

int main()
{
   Date date;
   //date.SetDate(29, 2, 2019);  // Not a Leap year
   date.SetDate(29, 2, 2020);  // Leap year
   std::cout << date.GetDay() << "/" << date.GetMonth() << "/" << date.GetYear()  << "\n";
}
