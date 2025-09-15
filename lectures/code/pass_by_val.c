#include <stdio.h>

void pass_by_value(int v) {
  v = 10;
}

void pass_by_pointer(int* v) {
  *v = 10;
}

int main() {
  int changeme = 0;
  pass_by_value(changeme);
  printf("The value is: %d\n", changeme);

  pass_by_pointer(&changeme);
  printf("The value is: %d\n", changeme);                                       
  return 0; 
}


