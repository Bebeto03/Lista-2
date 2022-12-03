#include <stdio.h>

int main() {
  int a, b, c, i, cont=0;

  printf("Informe um valor A: ");
  scanf("%d", &a);

  printf("Informe um valor B: ");
  scanf("%d", &b);

  if (b < a) {
    c = a;
    a = b;
    b = c;
  }

  for(i=a;i<=b;i++){
    if(i%3==0){
      cont = cont + 1;
    }
  }

  printf("Quantidade de numeros divisiveis por 3: %d", cont);

  

    return 0;
  }