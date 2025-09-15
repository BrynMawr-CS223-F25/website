#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void code(int v, char* msg) {
  if (v == 0) strcpy(msg, "val0");
  else if (v == 1) strcpy(msg, "val1");
  else if (v == 2) strcpy(msg, "val2");
}

int main() {
  srand(time(0));
  int val = rand() % 3;

  char msg[16];
  code(val, msg);
  printf("%s\n", msg);
  return 0;
}

