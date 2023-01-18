#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

    srand(time(NULL));

int v[5], i, maior = 0, menor = 1000000, soma = 0, valor, cont = 0;

    for(i=0; i<5; i++){
        v[i] = rand()% 10;
    }

    for(i=5; i>0; i--){
        printf("%d", v[i-1]);
    }

    for(i=0; i<=5; i++){
        soma = soma + v[i];

        if(maior < v[i]){
            maior = v[i];
        }
        if(menor > v[i]){
            menor = v[i];
        }

    }

    printf("\nEntre com um valor\n");
    scanf("%d", &valor);

    for(i=0; i<5; i++){

        if(valor == v[i]){
            cont++;
        }
    }

    printf("Soma dos valores: %d\n", soma);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("A quantidade de vzs que o numero repete: %d", cont);


}
