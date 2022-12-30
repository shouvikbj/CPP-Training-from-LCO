#include <iostream>

using namespace std;

void printval(int a)
{
  printf("Integer value is: %d\n", a);
}

void printval(double a)
{
  printf("Double value is: %f\n", a);
}

void printval(int *a)
{
  printf("Pointer value is: %p\n", a);
}

int main()
{
  printval(5);
  printval(5.3);
  // printval(NULL); // this is not allowed
  printval(nullptr);

  return 0;
}