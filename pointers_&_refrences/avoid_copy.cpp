//gnu cmd for execution : g++ -std=c++11 avoid_copy.cpp -o avoid

#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> vect{"I hate managers",
                      "higher the manager position bigger their lies",
                    };

  //we avoid copy of whole string object by using reference.
  for(const auto &x : vect)
  std::cout << x << endl;

return 0;
}
