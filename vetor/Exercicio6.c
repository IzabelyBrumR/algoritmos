#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int v[8], i;

    for(i=0; i<8; i++){

        printf("\nEntre com um numero inteiro:\n");
        scanf("%d", &v[i]);
    }

    for(i=0; i<8; i++){

        printf("\nOs numeros sao:%d\n", v[i]);

    if(v[i]%6==0){

        printf("\nOs multiplos de seis: %d\n", v[i]);

    }
    }
}
