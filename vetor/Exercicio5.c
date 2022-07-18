#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int v[15], i;

    for(i=0; i<15; i++){

        printf("\nEntre com os numeros:\n");
        scanf("%d", &v[i]);

        if(i%2==0){

            printf("\nO numeros na posicao par:%d", v[i]);
        }
    }



}
