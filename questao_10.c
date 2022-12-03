#include <stdio.h>

int main(){
  int x, i;

  for(i=15;i<=90;i++){
    if(i%4==0){
      printf("%d : %d\n", i, i*i);
    }
  }
  return 0;
}