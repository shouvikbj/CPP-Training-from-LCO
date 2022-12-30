#include <iostream>

using namespace std;

struct User
{
  const int uId;
  const char *name;
  const char *email;
  int course_count;
};

int main()
{
  User mickey = {001, "mickey", "mickey@cartoon.com", 2};
  User donald = {002, "donald", "donald@cartoon.com", 3};
  User *d = &donald;

  cout << mickey.email << endl;
  cout << donald.email << endl;

  donald.email = "ddonaldy@toon.com";
  cout << donald.email << endl;

  cout << donald.course_count << endl;
  donald.course_count = 4;
  cout << donald.course_count << endl;

  cout << d->email << endl;

  d->course_count = 12;
  cout << d->course_count << endl;
  cout << donald.course_count << endl;

  return 0;
}