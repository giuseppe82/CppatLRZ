#include <iostream>
#include <cmath>
double f ( double x , int i ) { return x ;} // 1
double f ( int i , double x ) { return x ;} // 2
double f ( int i , int x ) { return x ;} // 3
int main () {
  f (0.1, 2); // ok : takes variant 1
  f (1, 2.);// ok : takes variant 2
  f (1, 2);// Error : does not compile
}
