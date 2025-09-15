#include <stdio.h>
#include <stdlib.h>

int main() {
  int values[10];
  printf("%d\n", values[11]);
  values[11] = 5; // memory not allocated!
}

