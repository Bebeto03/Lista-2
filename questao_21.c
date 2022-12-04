#include <stdio.h>

int main(){
  int a,b,c,d,e,f;

  printf("Informe um valor inteiro de 5 digitos: ");
  scanf("%d", &a);

  b = a/10000;
  c = (a%10000)/1000;
  d = ((a%10000)%1000)/100;
  e = (((a%10000)%1000)%100)/10;
  f = (((a%10000)%1000)%100)%10;

  if(b==f && c==e){
    printf("Esse numero e um palindromo.");
  }else{
    printf("Esse numero nao e um palindromo.");
  }

  return 0;
}