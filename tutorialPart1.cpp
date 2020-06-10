#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double power(double base, int exponent)
  {
    double result=1;
    for(int i=0; i < exponent; i++)
    {
      result = result * base;
    }
    return result;
  }

int main () {
  int base, exponent;
  cout << "What is the base?";
  cin >> base;
  cout << "What is the exponent?";
  cin >> exponent;
  double myPower = power(base, exponent);
  cout << myPower;
}
