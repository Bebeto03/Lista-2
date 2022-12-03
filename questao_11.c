#include <stdio.h>

int main(){
  int a, b, c, i, soma=0;

  printf("Informe um valor A: ");
  scanf("%d", &a);

  printf("Informe um valor B: ");
  scanf("%d", &b);

  if (b < a){
    c = a;
    a = b;
    b = c;
  }

  for(i=a; i<=b; i++){
    if(i%2==0){
      soma = soma + i;
    }
  }

  printf("%d", soma);

  return 0;
  }