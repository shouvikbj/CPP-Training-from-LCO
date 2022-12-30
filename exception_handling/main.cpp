#include <iostream>

using namespace std;

int main()
{
  // int call_api = 2;
  // float call_api = 2.1;
  char call_api = 's';

  try
  {
    cout << "Trying to use API value..\n";
    cout << "Did some testing with API value..\n";
    throw call_api;
    cout << "NO Code execution after return and throw\n";
  }
  catch (int x)
  {
    cout << "Integer exception handled.\n";
  }
  catch (float y)
  {
    cout << "Float exception handled.\n";
  }
  catch (...)
  {
    cout << "Something went wrong!\n";
  }

  cout << "keep on moving with the code.\n";

  return 0;
}