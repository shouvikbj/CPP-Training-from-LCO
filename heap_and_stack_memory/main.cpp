#include <iostream>

using namespace std;

struct User
{
  const int id;
  int age;
  User() : id(001), age(22) {}
};

int main()
{
  // stack memory

  int score = 100;
  User mike;

  // heap memory

  int *heap_score = new int;
  *heap_score = 200;
  User *nike = new User();

  delete heap_score;
  delete nike;

  return 0;
}