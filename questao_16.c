#include <stdio.h>

int main(){
  int soma1=0, soma2=0, i;

  for(i=0;i<=100;i++){
    if(i%3==0){
      soma1 = soma1 + i;
    }
    if(i%5==0){
      soma2 = soma2 + (i+100);
    }
  }

  printf("%d\n", soma1);
  printf("%d", soma2);


  return 0;
}