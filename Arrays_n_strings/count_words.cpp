//C++ program to count words in a string using stringstream

#include<bits/stdc++.h>

using namespace std;

int count_words(string str)
{
  //breaking input into word using string stringstream
  stringstream s(str); //used for breaking words

  string word;

  int count = 1;

  while (s >> word)
  count++;

  return count;
}


int main()
{
  string s = "Im intrested in digital signal processing and sensor fusion endineering"
              "Both of these are Advance Engineering fields";

  std::cout << "Number of words are :" << count_words(s)<<'\n';

  return 0;
}
