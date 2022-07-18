#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int A[5], i, soma=0;

    for(i=0; i<5; i++){

        printf("Entre com o valor:\n");
        scanf("%d", &A[i]);

        if(A[i]%2!=0){

            soma = soma + A[i];

        }
    }

    printf("A soma dos numeros impares:%d\n", soma);
}
