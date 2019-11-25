#include <iostream>
int main () {
	std :: cout << " Do you confirm ? [ y / n ] : " ;
	char answer ;
	std :: cin >> answer ;
	switch ( answer ) {
		case 'y':
		case 'Y':
			std :: cout << " \nConfirmed !\n " ;
			break ;
		default : std :: cout << " \nAborted !\n " ;
	}
}
