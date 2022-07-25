#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, v[40], soma=0;

    for(i=0; i<40; i++){

        printf("Entre com um numero inteiro:\n");
        scanf("%d", &v[i]);
    }

    for(i=0; i<40; i++){

        soma = soma + v[i];
    }

printf("A soma dos valores inseridos: %d\n", soma);


}
