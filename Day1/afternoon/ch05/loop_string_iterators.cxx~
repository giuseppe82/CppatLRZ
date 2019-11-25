#include <iostream>
#include <string>
#include <vector>
using svec = std::vector <std::string>; // gets really handy , right ?
int main () {
  svec sv {};
  sv.push_back ("Text No 1");
  sv.push_back ("Text No 2");
  sv.push_back ("Text No 3");
  for(int i =0; i < sv.size(); ++ i)
    sv[i].erase(5,3);
  for(int i =0; i < sv.size(); ++ i)
    std::cout << " String " << i << " is now " << sv[i] << "\n" ;
}
