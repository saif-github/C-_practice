#include <iostream>
/*
The capability of a class to derive properties and characteristics from another class is called Inheritance.
Inheritance is one of the most important feature of Object Oriented Programming.

Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.
*/

class Vehicle {
public:
  void get_info() {
    std::cout << "This is a vehicle!"
              << "\n";
  }

private:
  int mileage;
  int fuel_capacity;
};

class Car : public Vehicle {
public:
  bool is_cabriolet;
};

class Truck : public Vehicle {
public:
  bool has_sleeping_cabin;
};

int main() {
  Car c;
  c.is_cabriolet = true;
  std::cout << c.is_cabriolet << "\n";
  c.get_info();
};
