//C++ program to demonstrate use of stringstream
//to count the frequency of words

#include <bits/stdc++.h>
using namespace std;

void print_frequency(string st)
{
  //each word is mapped to its Frequency
  map<string,int> FW;

  //Used to breaking words
  stringstream ss(st);
  string Word;

  while(ss >> Word)
  FW[Word]++;

  map<string,int>::iterator m;

  for(m=FW.begin();m!=FW.end();m++)
  cout << m->first << "->"
      << m->second << "\n";
}

int main(){
string s = "practice makes man perfect and perfect practice makes a Good Engineer";
print_frequency(s);

return 0;
}
