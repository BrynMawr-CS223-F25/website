#include <stdio.h>

int main() {
  unsigned char a = 0xA;
  unsigned char b = 0x6;
  unsigned char not = ~a;

  printf("%02X & %02X = %02X\n", a, b, a & b);
  printf("%02X | %02X = %02X\n", a, b, a | b);
  printf("%02X ^ %02X = %02X\n", a, b, a ^ b);
  printf("~%02X = %02X\n", a, not);
  printf("%lu\n", sizeof(unsigned char));

  return 0;
}

