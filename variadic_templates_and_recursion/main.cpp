#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

template <typename T>
void func(T t)
{
  print(t);
}

template <typename T, typename... Args>
void func(T t, Args... args)
{
  print(t);
  func(args...);
}

int main()
{
  string myName = "Shouvik";

  func(5);
  func(1, 2, 3.4, 4.5, myName);

  return 0;
}