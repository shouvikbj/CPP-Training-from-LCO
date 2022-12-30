#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include "printer.h"

using namespace std;

int main()
{
  list<int> mylist;

  for (int i = 3; i <= 10; ++i)
  {
    mylist.push_back(i);
  }

  print(mylist.front());
  print(mylist.back());

  mylist.pop_back();
  print(mylist.back());

  mylist.reverse();
  for (auto i : mylist)
  {
    print(i);
  }

  mylist.sort();
  for (auto i : mylist)
  {
    print(i);
  }

  return 0;
}