#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int i, a[5], x, maior=0;

    for(i=0; i<5; i++){

        printf("\nEntre com o elemento:\n");
        scanf("%d", &a[i]);

        if(a[i]>maior){

            maior=a[i];
            x=i;

        }
    }

printf("\nO maior elemento:%d", a[i]);
printf("\nEsta na posicao:%d", x);

}
