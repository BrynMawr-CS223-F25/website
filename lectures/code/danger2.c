#include <stdio.h>
#include <stdlib.h>

int main() {
  int* values = malloc(sizeof(int) * 10);
  free(values);
  free(values);
}

