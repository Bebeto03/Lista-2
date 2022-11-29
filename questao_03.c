#include <stdio.h>

int main(){
  int F, fat;

  printf("Informe um valor inteiro positivo: ");
  scanf("%d", &F);

  for (fat=1; F>1; F=F-1){
    fat = fat * F;
  }

  printf("Fatorial desse valor: %d", fat);

  return 0;
}