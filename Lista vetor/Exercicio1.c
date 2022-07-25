#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, v[5], media, soma=0, cont=0;

    for(i=0; i<5; i++){

        printf("Entre com um valor inteiro:\n");
        scanf("%d", &v[i]);

        soma = soma + v[i];

    }
        media = soma / 5;

    for(i=0; i<5; i++){


        if(v[i]>media){
            cont++;
        }


    }

printf("\nA media dos numeros:%d\n", media);
printf("\nOs numeros maiores que a media:%d", cont);


}
