// include iostream for printing
#include <iostream>

// Define pi constant
const float pi = 3.14159;
using namespace std;

// Define Shape base class
// strictly base class because its interface is pure virtual methods

    // Define public empty constructor
    // Define public virtual Area() and PerimeterLength()

        //const = 0 specifier in interface is telling the compiler that this method must be implemented in one of the derived classes
        // For this class it is just part of the interface
class Shape {
    public:
        Shape() {}
        virtual double Area(){
          std::cout << "This is a message from the derived class!!" << "\n";
        };
        //virtual double Perimeter() const = 0;
};

// Define Rectangle to inherit publicly from Shape

    // Declare private attributes width and height

    // Declare public constructor
    // Override virtual base class functions

        // Overriding methods
class Rectangle : public Shape{
  private:
    double _width;
    double _height;

  public:
    Rectangle(double width,double height){
      _width = width;
      _height = height;
    }
  //print () is already virtual function in derived class, we could also declared  as virtual
  //void print () explicitly
  double Area()
  {
    double _area = _width*_height;
    std::cout << "This is a message from the derived class!!" << "\n";
    return _area;
  }
};

// Define Circle to inherit publicly from Shape

    // Declare private attributes width and height

    // Declare public constructor
    // Override virtual base class functions


// Test in main()
int main()
{
    Shape *pointer;
    Rectangle obj(12.8,6.3);
    pointer = &obj;
    //virtual function, binded at runtime (Runtime polymorphism)
    double area = pointer->Area();  // OUTPUT: print derived class
    std::cout << "Rectangle area = " << area << '\n';
}
