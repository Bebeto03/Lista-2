#include <stdio.h>

int main() {
  int n, maior, menor;

  maior = 0;
  menor = 0;

  while (n != 0) {
    printf("Informe um valor: ");
    scanf("%d", &n);

    if (n > maior) {
      maior = n;
    }
    if (n < menor && n != 0) {
      menor = n;
    }
  }

  printf("Maior valor: %d\n", maior);
  printf("Menor valor: %d", menor);

  return 0;
}