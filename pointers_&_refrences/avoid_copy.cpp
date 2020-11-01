#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> vect{"I hate managers",
                      "They are blody psycho paths",
                      "Untalented Dumb asses"};
                      
  //we avoid copy of whole string object by using reference.
  for(const auto &x : vect)
  std::cout << x << endl;

return 0;
}
