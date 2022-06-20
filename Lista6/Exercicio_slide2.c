#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int cont = 100, soma = 0;

    do{
        soma = soma + cont;
        cont = cont + 2;
    }
    while(cont <= 200);

    printf("\n A soma dos numeros pares: %d", soma);

}
