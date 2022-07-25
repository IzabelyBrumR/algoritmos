#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int num[15], i;

    for(i=0; i<15; i++){

        printf("\nEntre com os numeros:\n");
        scanf("%d", &num[i]);

    }
    for(i=0; i<15; i++){

        if(num[i]%2==0){

            printf("\nEste numero e par:%d\n", num[i]);
        }
        else{

            printf("\nEste numero e impar:%d\n", num[i]);

        }
    }



}
