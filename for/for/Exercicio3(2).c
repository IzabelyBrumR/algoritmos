#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, numero, cubo, raiz;

    for(i=0; i<2; i++){

        printf("\n\nInsira um numero:\n");
        scanf("%d", &numero);

        cubo = pow(numero,3);

        raiz = cbrt(numero);

    printf("A raiz cubica do numero e: %d\n", raiz);
    printf("O cubo do numero e: %d", cubo);

    }

}
