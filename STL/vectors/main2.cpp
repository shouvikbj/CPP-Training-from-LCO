#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "printer.h"

using namespace std;

int main()
{
  vector<int> nums;
  vector<string> heros{"batman", "flash", "superman", "robin"};

  nums.push_back(5);
  nums.push_back(6);
  nums.push_back(7);
  nums.push_back(8);

  for (int i = 0; i <= 5; ++i)
  {
    nums.push_back(i);
  }

  print(nums.size());
  print(nums.capacity());
  print(nums.max_size());

  print(nums.empty());

  for (auto i = nums.begin(); i != nums.end(); ++i)
  {
    print(*i);
  }

  return 0;
}