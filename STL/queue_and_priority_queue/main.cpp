#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include "printer.h"

using namespace std;

int main()
{
  queue<int> myq;

  myq.push(10);
  myq.push(12);
  myq.push(14);
  myq.push(16);

  print(myq.front());
  print(myq.back());

  myq.pop();
  print(myq.front());
  print(myq.back());

  while (!myq.empty())
  {
    print(myq.front());
    myq.pop();
  }

  priority_queue<int> mypq;
  mypq.push(10);
  mypq.push(40);
  mypq.push(50);
  mypq.push(5);

  while (!mypq.empty())
  {
    print(mypq.top());
    mypq.pop();
  }

  return 0;
}