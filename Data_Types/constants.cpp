#include <iostream>
using std::cout;
using std::endl;

#define X 10 //Can define constants up here too

int main()
{
  const int Variable = 5; //constant variables are capitalized
  enum {y = 100} //third way to assign constants
  auto x = 5U; //automatically assigns the data type, but need to use c++11 when compiling, "g++ file -std=c++11"
}
