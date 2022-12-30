#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

int main()
{
  []
  {
    print("Hello LearnCodeOnline.in");
  }();
  []()
  {
    return 100;
  };

  auto sum = [](auto a, auto b)
  {
    return a + b;
  };
  print(sum(2, 5));
  print(sum(2.3, 5.2));
  string a = "abc";
  string b = "def";
  print(sum(a, b));

  return 0;
}