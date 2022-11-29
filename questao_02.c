#include <stdio.h>

int main(){
  int x ;

  do{
    printf("Informe um valor: ");
    scanf("%d", &x);

    switch (x){
      case 0: printf("Fim do programa.\n");
      break;
      
      case 1: printf("Domingo.\n");
      break;
      
      case 2: printf("Segunda.\n");
      break;
      
      case 3: printf("Terça.\n");
      break;
      
      case 4: printf("Quarta.\n");
      break;
      
      case 5: printf("Quinta.\n");
      break;
      
      case 6: printf("Sexta.\n");
      break;
      
      case 7: printf("Sabado.\n");
      break;
      
      default: printf("Valor invalido.\n");
      }
  }while (x != 0);

  return 0;
}