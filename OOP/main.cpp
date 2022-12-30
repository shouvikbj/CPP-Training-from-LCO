#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

class User
{
  int _secret = 22;

public:
  string name = "default";
  void classMessage();
  void setSecret(const int &newsecret)
  {
    _secret = newsecret;
  }
  int getSecret() const;
};

void User::classMessage()
{
  cout << "Class is great, " << name << endl;
}

int User::getSecret() const
{
  return _secret;
}

int main()
{
  User sam;
  sam.name = "Sam";
  sam.classMessage();
  sam.setSecret(333);
  print(sam.getSecret());

  User shouvik;
  shouvik.classMessage();
  shouvik.name = "Shouvik";
  shouvik.classMessage();
  print(shouvik.getSecret());

  const User rock;
  print(rock.getSecret());

  User peter = sam;
  print(peter.getSecret());

  return 0;
}