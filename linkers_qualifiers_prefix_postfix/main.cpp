#include <iostream>

using namespace std;

int lifeUp()
{
  static int life = 3;
  // return life = life + 1;
  // return life++;
  return ++life;
}

int main()
{
  int life = 3;
  cout << "Your starting game life is : " << life << endl;

  life = lifeUp();
  cout << "Your updated game life is : " << life << endl;

  life = lifeUp();
  cout << "Your updated game life is : " << life << endl;

  return 0;
}