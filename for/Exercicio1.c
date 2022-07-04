#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int n, i, soma=0;

printf("Entre com um numero:\n");
scanf("%d", &n);

for(i=3; i<=n; i++){

    soma = soma + (5*i+2);

}

printf("O resultado da soma e: %d", soma);

}
