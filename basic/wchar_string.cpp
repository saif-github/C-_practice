// An example C++ programto demonstrate the use of wchar_t in an array

#include<iostream>
using namespace std;

int main(){
//char type array string
char cname[]="mindfullness";
std::cout << cname << endl;

//wide char type array string
wchar_t wname[]=L"mindfullness";
wcout << wname << endl ;

return 0;
}
