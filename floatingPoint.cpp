#include <iostream>
#include <float.h>
using std::cout;
using std::endl;

int main()
{
  float a = 10.0 / 3; //Least trustworthy
  a = a * 10000000000;
  double b = 15.5/2;
  long double c;

  cout << std::fixed << a << std::endl;
  cout << FLT_DIG << std::endl;
  cout << DBL_DIG << endl;
  cout << LDBL_DIG << endl;
}
