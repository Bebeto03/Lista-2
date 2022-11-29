#include <stdio.h>

int main(){
  int j, p, cont;

  j = 150;
  p = 110;
  cont = 0;

  while (j >= p){
    j = j + 2;
    p = p + 3;
    cont = cont + 1;
  }

  printf("%d anos.", cont);

  return 0;
}