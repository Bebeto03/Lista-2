#include <stdio.h>

int main(){
  int i;
  float f;

  for(i=10;i<=100;i++){
    f = i * 1.8 + 32;
    if(i%10==0){
      printf("%d C = %.1f F\n", i, f);
    }
  }


  return 0;
}