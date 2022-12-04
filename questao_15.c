#include <math.h>
#include <stdio.h>

int main() {
  int i, x;

  for (i = 0; i <= 7; i++) {
    x = pow(3, i);
    printf("3 elevado a %d: %d\n", i, x);
  }

  return 0;
}