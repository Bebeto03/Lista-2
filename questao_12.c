#include <stdio.h>

int main(){
  int x, i, val;

  printf("Informe um número inteiro qualquer: ");
  scanf("%d", &x);

  printf("TABUADA DO %d:\n", x);

  for(i=0; i<=10; i++){
   val = x * i;
   printf("%d * %d = %d\n", i, x, val);
  }
  return 0;
}