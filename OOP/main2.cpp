#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

class Phone
{
  string _name = "";
  string _os = "";
  int _price = 0;

public:
  Phone();                                                       // default constructor
  Phone(const string &name, const string &os, const int &price); // parameter constructor
  Phone(const Phone &);                                          // copy constructor
  string getName()
  {
    return _os;
  }
  int getPrice();
  ~Phone(); // destructor
};

int Phone::getPrice()
{
  printf("Value of getPrice is %p\n", this);
  return _price;
}

Phone::Phone() : _name(), _os("Andy"), _price()
{
  print("Default constructor");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
  print("Parameter constructor");
}

Phone::Phone(const Phone &values)
{
  print("Copy constructor");
  _name = "new-" + values._name;
  _os = "skinned-" + values._os;
  _price = values._price;
}

Phone::~Phone()
{
  printf("Destructor called for %s\n", _name.c_str());
}

int main()
{
  Phone samsungA1;
  print(samsungA1.getName());

  Phone OnePlus8("OP8", "Android-Oxy", 799);
  print(OnePlus8.getName());

  printf("Value of object is %p\n", &OnePlus8);
  print(OnePlus8.getPrice());

  Phone OnePlus8S = OnePlus8;
  print(OnePlus8S.getName());

  return 0;
}