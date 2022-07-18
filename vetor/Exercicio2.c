#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int v[6], i;

    for(i=0; i<6; i++){

        printf("\nEntre com os numeros:\n");
        scanf("%d", &v[i]);

    }

    for(i=5; i>-1; i--){

        printf("Os elementos em ordem inversa:%d\n", v[i]);

    }
}
