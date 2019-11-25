/*#include <iostream>
#include <iomanip>
int main () {
  double d = 3.1415;
  std::cout << std::scientific << d << std::endl;
  std::cout << std::fixed << d << std::endl;
  bool b = true ;
  std::cout << std::boolalpha << b << std::endl;
  std::cout << std::noboolalpha << b << std::endl;
}
*/
#include <iostream>
#include <iomanip>
#include <locale>
#include <boost/algorithm/string.hpp>
#include <string>
int main () {
  std::cout.imbue(std::locale("en_US.utf8"));
  double d = 3.1415;
  bool b = true;
  std::cout.width(12);
  std::cout << "Left order:\n" << std::left // << std::setfill('*')
	    << std::setw(12) << std::scientific << d << "\n"
	    << std::setw(12) << std::hex << std::showbase << d << "\n"
	    << std::setw(12) << std::fixed << d << "\n\n";
  
  std::cout << "Right order:\n" << std::right
            << std::setw(12) << std::scientific << d << "\n"
            << std::setw(12) << std::hex << std::showbase << d	<< "\n"
            << std::setw(12) <<	std::fixed << d	<< "\n\n";    
    
}


