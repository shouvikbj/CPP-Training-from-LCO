#include <iostream>
#include "adder.h"

using namespace std;

// call by value
void lifeUp(int life)
{
  ++life;
}

// call by reference
void another_lifeUp(int *life)
{
  ++(*life);
}

void another_another_lifeUp(int &life)
{
  ++life;
}

int main()
{
  int life = 3;
  lifeUp(life);
  cout << life << endl;

  another_lifeUp(&life);
  cout << life << endl;

  another_another_lifeUp(life);
  cout << life << endl;

  int v1 = 4;
  int v2 = 5;
  float v3 = 5.6;
  float v4 = 7.5;

  cout << addme(v1, v2) << endl;
  cout << addme(v3, v4) << endl;

  return 0;
}