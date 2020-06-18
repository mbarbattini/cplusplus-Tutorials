#include <iostream>
#include <cmath>

using std::endl;
using std::cout;

int main()
{
  cout << sqrt(-25) << endl; // Not a Number
  cout << pow(10,999) << endl; // infinity
  cout << pow(-10,999) << endl; //negative infinity

  cout << 10 % 3 << endl; //mod operator
  cout << remainder(10, 3.25) << endl; // decimal mod operator
  cout << fmax(10,1) << endl;

// More Functions:
// floor, trunc, round
}
