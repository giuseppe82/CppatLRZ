#include <iostream>
int main(){

	double am[5][5] = {};
	double bm[5*5] = {};
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			am[i][j] = (i*5.+j);
			bm[i*5 + j] = (i*5.+j); 
		}
	}
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			std::cout << am[i][j] << " ";
		}
		std::cout << "\n";
	}
}
