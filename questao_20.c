#include <stdio.h>

int main(){
  int i, fat=1;

  for(i=1;i<=10;i++){
    fat = fat *i;
    if(i%2!=0){
    printf("Fatorial de %d: %d\n",i, fat);
    }
  }

  return 0;
    }