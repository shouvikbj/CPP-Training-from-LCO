#include <iostream>
#include <string>
#include "printer.h" +

using namespace std;

class MyFloat
{
  float ft;

public:
  MyFloat()
  {
    ft = 0.1;
  }
  void getValue()
  {
    print(ft);
  }
  void operator()(float v) // operator overloading
  {
    ft += v;
  }
};

int main()
{
  MyFloat floaty;
  floaty.getValue();

  floaty(0.3);
  floaty.getValue();

  return 0;
}