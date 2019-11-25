#include <iostream>
double a = 2.5;
int main(){
	int a = 3;
	std::cout << " a=" << a << "\n"; // 3 is printed
	std::cout << " a=" << ::a << "\n"; // 2.5 is printed	
}
