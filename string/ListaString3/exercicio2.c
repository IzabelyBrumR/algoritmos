#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

main(){

char str[5][5];
int i, v[5], menor=100000000, maior=0, litros=0;

    for(i=0; i<5; i++){

        fflush(stdin);
        printf("\nEntre com um carro\n");
        gets(str);

        printf("\nEntre com o consumo de combustivel\n");
        scanf("%d", &v[i]);

        if(v[i] < menor){

            menor = v[i];

        }

    }
    for(i=0; i<5; i++){

        litros = 1000 / v[i];

    }

printf("\nO carro mais economico: %c\n", str);
printf("\nQuantos litros cada carro utiliza em 1000 quilometros: %d\n", litros);


}
