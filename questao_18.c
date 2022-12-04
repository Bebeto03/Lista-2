#include <stdio.h>

int main(){
    int i;
    double x = 0, aux;

    for(i = aux = 1; i <= 64; i++){
        x= x + aux;
        aux = aux * 2;
    }

    printf("Graos = %.0lf\n", x);

    return 0;
}