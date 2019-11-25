#include <cmath>
#include <iostream>
double Gauss(double x, double mu=0., double sigma=1.){
  using namespace std;
  if (x<0)
    return 0;
  return exp(-0.5*(x -mu)*(x-mu)/(sigma*sigma))/(sqrt(2.*M_PI)*sigma);
    }
int main(){
  std::cout << Gauss(-0.2) << "\n";
  std::cout << Gauss(0.2) << "\n";
  std::cout << Gauss(0.2, 1.) << "\n";
  std::cout << Gauss(0.2, 1., 0.6) << "\n";
}
