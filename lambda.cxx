#include <iostream>
#include <cmath>
/*int main(){
  std::cout << "sqrt(2.) = " << [](double a){
				  double x = 0.5*a;
				  for (int i=0; i<10; ++i)
				    x = 0.5*(x+a/x);
				  return x;
				} << "\n";
}

#include <iostream>
int main () {
  auto f = [](double a){
	     double x =0.5*a;
	     for(int i =0; i <10; ++ i)
	       x =0.5*( x + a / x );
	     return x;
};
std::cout << " sqrt (2.) = " << f(2.) << "\n";
}
*/
int main () {
  double mu=0., sigma=1.;
  auto f = [&mu, &sigma](double x){
	     return exp(-0.5*(x - mu)*(x - mu)/(sigma * sigma))/(sqrt(2.* M_PI)* sigma);
	   };
  std::cout << " Gaus (0.2 , mu =0. , sigma =1.) = " << f(0.2) << "\n";
  mu = 1.;
  std::cout << " Gaus (0.2 , mu =1. , sigma =1.) = " << f(0.2) << "\n";
}
