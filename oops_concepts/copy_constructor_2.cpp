/*
Copy constructor is called when a new object is created from an existing object,
as a copy of existing object.
*/

#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
  char *s;
  int size;
public:
  String(const char *str = NULL);   //constructor

  ~String(){
    delete [] s;
  }            //destructor

  //exp : IF we remove this copy constructor , we don't get expected output.
  //The changes made for str2 reflect in str1 as well which is never expected
  String(const String&);      //copy constructor

  void print(){std::cout << s << '\n';}   //Function to print String
  void change(const char *);      //Function to change
};

String::String(const char *str)
{
  size = strlen(str);
  s = new char[size+1];
  strcpy(s,str);
}

void String::change(const char *str)
{
  delete [] s;
  size = strlen(str);
  s = new char[size+1];
  strcpy(s,str);
}

String::String(const String& old_str)
{
  size = old_str.size;
  s = new char[size+1];
  strcpy(s,old_str.s);
}

int main()
{
  String str1("practice");
  String str2 = str1;

  str1.print();
  str2.print();

  str2.change("perseverence");

  str1.print();
  str2.print();

  return 0;
}
