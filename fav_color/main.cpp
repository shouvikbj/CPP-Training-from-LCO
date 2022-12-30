#include <iostream>

using namespace std;

int main()
{
  string color;
  cout << "What is your favourite color? : ";
  getline(cin, color);

  cout << "Hey, " << color << " is my favourite color too!\n";

  return 0;
}