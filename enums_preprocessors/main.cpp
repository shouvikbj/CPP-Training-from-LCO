#include <iostream>

using namespace std;

#define PI 3.14;

enum MsOffice : uint8_t
{
  BOLD = 5,
  ITALICS,
  UNDERLINE,
  CROSSED
};

int main()
{
  int myAttributes = UNDERLINE;

  cout << myAttributes << endl;

  return 0;
}