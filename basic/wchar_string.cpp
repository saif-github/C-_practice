// An example C++ programto demonstrate the use of wchar_t in an array

/*
Wide char is similar to char data type, except that wide char take up twice the space and can take on much larger values as a result. char can take 256 values which corresponds to entries in the ASCII table. On the other hand, wide char can take on 65536 values which corresponds to UNICODE values which is a recent international standard which allows for the encoding of characters for virtually all languages and commonly used symbols.

    Just like the type for character constants is char, the type for wide character is wchar_t.
    This data type occupies 2 or 4 bytes depending on the compiler being used.
    Mostly the wchar_t datatype is used when international languages like Japanese are used.
*/

#include<iostream>
using namespace std;

int main(){
//char type array string
char cname[]="I am practicing mindfullness";
std::cout << cname << endl;

//wide char type array string
wchar_t wname[]=L"I am practicing mindfullness";
wcout << wname << endl ;

//Hello world in japanese or chinese
wchar_t uname[]=L"世界こんにちは";
wcout << uname << endl ;

//japanese
wchar_t jname[]=L"ぁあぃいぅうぇえぉおかがきぎくぐけげこごさざしじすずせぜそぞただちぢっつづてでとどなにぬねのはばぱひびぴふぶぷへべぺほぼぽまみむめもゃやゅゆょよらりるれろゎわゐゑをんゔゕゖ゗゘゙゚゛゜ゝゞゟ";
wcout << jname << endl ;

return 0;
}
