#include <iostream>
#include <climits>
using namespace std

int main()
{
  short a;
  int x;
  long c;
  long long d;
  //short <= int <= long <= long long
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  cout << SHRT_MAX << endl;
  cout << SHRT_MIN << endl;
  cout << USHRT_MAX << endl;
  cout << INT_MAX << endl;
  cout << LLONG_MAX << endl;
}
