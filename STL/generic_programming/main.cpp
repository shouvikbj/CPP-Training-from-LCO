#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

template <typename T>
T getBigger(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  print(getBigger(3, 5));
  print(getBigger(3.5, 5.1));
  print(getBigger('a', 'b'));

  return 0;
}