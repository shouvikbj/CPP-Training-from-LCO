#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

class Money
{
public:
  void getMoney()
  {
    print("Got 5K USD in my account.");
  }
};

class Man
{
  string _name;
  int _age;
  Man() {} // disabling the default constructor
protected:
  Man(const string &name, const int &age) : _name(name), _age(age) {}
  void run()
  {
    print("I can run.");
  }

public:
  void sayName() const;
};

void Man::sayName() const
{
  print("My name is " + _name + " and age is " + to_string(_age));
}

// superman

class Superman : public Man
{
  bool webbing;

public:
  Superman(string name) : Man(name, 26) {}
  void run()
  {
    print("I can run at light speed.");
  }
};

// spiderman

class Spiderman : public Man, public Money
{
  bool flight;

public:
  Spiderman(string name) : Man(name, 19) {}
  void run()
  {
    print("I can run at normal speed.");
  }
};

int main()
{
  Superman clark("Kent");
  clark.sayName();
  clark.run();

  Spiderman peter("Parker");
  peter.sayName();
  peter.run();
  peter.getMoney();

  return 0;
}