//gnu cmd for execution : g++ -std=c++11 avoid_copy.cpp -o avoid

#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> vect{"Live with Gratitude",
                      "The wound is the place where light enters you",
                    };

  //we avoid copy of whole string object by using reference.
  for(const auto &x : vect)
  std::cout << x << endl;

return 0;
}
