#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, v[50], maior = 0, menor = 10000000000000, media, soma=0;

    for(i=0; i<50; i++){

        printf("Entre com os valores:\n");
        scanf("%d", &v[i]);

        if(maior < v[i]){
            maior = v[i];
        }
        if(menor > v[i]){
            menor = v[i];
        }
        soma = soma + v[i];
    }

media = soma / 50;

printf("O maior valor: %d\n", maior);
printf("O menor valor: %d\n", menor);
printf("A media dos valores: %d", media);


}
