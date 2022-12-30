#include <iostream>

using namespace std;

void sayHello()
{
  puts("Hello there!");
}

int sayTwo()
{
  return 2;
}

int main()
{
  sayHello();
  printf("%d\n", sayTwo());

  return 0;
}