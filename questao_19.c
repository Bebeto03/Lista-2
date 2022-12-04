#include <stdio.h>

int main(){
  int a,b,i,cont=0,soma=0;
  float media;

  printf("Informe uma faixa de números inteiros.\n");
  printf("Inicio: ");
  scanf("%d", &a);
  printf("Termino: ");
  scanf("%d", &b);

  for(i=a;i<=b;i++){
    cont = cont + 1;
    soma = soma + i;
  }

  media = soma/cont;

  printf("Media aritmetica: %.1f", media);


  return 0;
}