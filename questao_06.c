#include <stdio.h>
int main(){
  int v, cont=0, cont1=0, cont2=0, cont3=0, cont4=0;

  printf("VOTACAO!\n");
  printf("\n5: Paulo\n");
  printf("7: Pedro\n");
  printf("0: Branco\n");
  printf("Outro: Nulo\n");
  printf("(Numeros negativos encerram o programa e nao sao contabilizados)\n");
  
  printf("\nInforme seu voto: ");
  scanf("%d", &v);
  switch (v){
    case 5: cont1 = 1;
    break;
    case 7: cont2 = 1;
    break;
    case 0: cont3 = 1;
    break;
    default: cont4 = 1;
  }

  while (v >= 0){
    printf("Informe seu voto: ");
    scanf("%d", &v);
    switch (v){
      case 5: cont1 = cont1 + 1;
      break;
      case 7: cont2 = cont2 + 1;
      break;
      case 0: cont3 = cont3 + 1;
      break;
      default: cont4 = cont4 + 1;
      break;
    }
    cont = cont + 1;
  }

  printf("\nPORCENTAGEM DE VOTOS:");
  printf("\nPaulo: %d%\n", (cont1*100)/cont);
  printf("Paulo: %d%\n", (cont2*100)/cont);
  printf("Branco: %d%\n", (cont3*100)/cont);
  printf("Nulo: %d%\n", ((cont4-1)*100)/cont);

  return 0;
}