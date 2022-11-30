#include<stdio.h>
#include<stdlib.h>

int main(){
int p1, p2;
float tot, ent;

printf ("Informe o Valor da Mercadoria: R$");
scanf ("%f", &tot);

p1 = tot / 3;

p2 = p1;

ent = tot - (p1 + p2);

printf("Entrada: R$%.2f\n", ent);
printf("Primeira prestacao: %d.00\n", p1);
printf("Segunda prestacao: %d.00", p2);

return 0;

}