#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr, x;
  ptr = malloc(sizeof(int) * 10);
  x = ptr[3]; // bad!
  printf("%d\n", x);
  ptr[3] = 4;
  return 0;
}


