#include <stdio.h>

int main(){
  float x, y;

  printf("Informe o valor do dividendo: ");
  scanf("%f", &x);

  printf("Informe o valor do divisor: ");
  scanf("%f", &y);

  while (y == 0){
    printf("O divisor nao pode ser nulo.\n");
    printf("Informe o valor do divisor: ");
    scanf("%f", &y);
  }

  printf("O valor da divisão é: %lf", x/y);

  
  return 0;
}