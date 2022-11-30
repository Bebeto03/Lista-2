#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, n1=0 , n2=1, F=1;
  
  printf("%d\n", F);
  
  for(i=1; i<=19;i++){
    F = n1 + n2;
    printf("%d\n", F);
    n1 = n2;
    n2 = F;
  }

  return 0;
}