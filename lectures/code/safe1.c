#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* code(int v) {
  char msg[16];
  if (v == 0) strcpy(msg, "val0");
  else if (v == 1) strcpy(msg, "val1");
  else if (v == 2) strcpy(msg, "val2");
  return msg;
}

int main() {
  srand(time(0));
  int val = rand() % 3;
  char* printme = code(val);
  printf("%s\n", printme);
  return 0;
}

