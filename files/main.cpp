#include <iostream>
#include <string>
#include "printer.h"

constexpr int maxbuffer = 1024;

using namespace std;

int main()
{
  // static const char *originalFile = "originalfile.txt";
  // static const char *editedFile = "editedfile.txt";

  // FILE *fh = fopen(originalFile, "w");
  // fclose(fh);

  // rename(originalFile, editedFile);

  // remove(editedFile);

  const char *filename = "mythisfile.txt";
  const char *information = "lorem ipsum dolor sit amet\n";

  // FILE *fh = fopen(filename, "w");
  // FILE *fh = fopen(filename, "a");

  // for (int i = 0; i < 50; ++i)
  // {
  //   fputs(information, fh);
  // }
  // fclose(fh);

  char buf[maxbuffer];

  FILE *fh = fopen(filename, "r");

  while (fgets(buf, maxbuffer, fh))
  {
    fputs(buf, stdout);
  }

  return 0;
}