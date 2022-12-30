#include <iostream>
#include <string>
#include <algorithm>
#include "printer.h"

using namespace std;

int main()
{
  int numbers[6] = {3, 2, 6, 4, 7, 9};
  print("Unsorted values: ");
  for (int n : numbers)
  {
    print(n);
  }

  sort(numbers, numbers + 6);
  // sort_heap(numbers, numbers + 6);

  print("Sorted values: ");
  for (int n : numbers)
  {
    print(n);
  }

  if (binary_search(numbers, numbers + 6, 7))
  {
    print("NUMBER FOUND");
  }
  else
  {
    print("NUMBER NOT FOUND");
  }

  return 0;
}