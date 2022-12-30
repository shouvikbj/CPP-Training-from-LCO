#include <iostream>
#include <string>

using namespace std;

string api_call()
{
  return "got some data from web\n";
}

int another_api_call()
{
  return 5;
}

int main()
{
  auto response = api_call();
  cout << "API CALL VALUE: " << response;
  if (typeid(response) == typeid(string))
  {
    puts("Type of both ID is String");
  }

  auto another_response = another_api_call();
  cout << "Another API CALL VALUE: " << another_response << endl;
  if (typeid(another_response) == typeid(int))
  {
    puts("Type of both ID is int");
  }

  return 0;
}