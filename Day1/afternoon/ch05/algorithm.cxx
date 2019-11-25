#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using svec = std::vector <std::string>; // alias 
void print (svec const & sv) { // call by const reference
  std::cout << " - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
  for (auto& p : sv ) // modern C++11
    std::cout << p << "\n";
}

int main () {
  svec sv {"Dale","Pluto","Chip"};
  print(sv);
  std::sort(sv.begin(),sv.end()); // <-- here is the actual work
  print(sv);
}
