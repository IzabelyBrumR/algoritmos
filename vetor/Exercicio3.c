#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

float v[10];
int i;

    for(i=0; i<10; i++){

        printf("\nEntre com os numeros:\n");
        scanf("%f", &v[i]);

        if(i%2==0){

            printf("\nO numeros na posicao par:%f", v[i]);

        }
    }




}
