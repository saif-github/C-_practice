//Tokenizing a string using stringstream
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string line = "I must learn to code in C++ programming";

  vector <string> tokens;

  stringstream check(line);

  string intermediate;

  //Tokenizing w.r.t space ' '
  while(getline(check,intermediate,' '))
  {
    tokens.push_back(intermediate);
  }

  //Printing the token vector
  for(int i = 0;i< tokens.size();i++)
  std::cout << tokens[i] << '\n';

return 0;
}
