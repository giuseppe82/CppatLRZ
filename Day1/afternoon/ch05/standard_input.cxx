#include <iostream>
#include <string>

int main () {
  std::string s;
  std::cout << "A string, please: ";
  std::cin >> s;
  if (!std::cin) {
    std::cout << "Oops! \n";
    return 0;
  }
  std::cout << s << "\n";
}
