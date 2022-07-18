#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int v[10], i, v2[10];

    for(i=0; i<10; i++){

    printf("Entre com os numeros:\n");
    scanf("%d", &v[i]);

    if(v[i] < 0){
        break;
    }

    v2[i]= v[i] * -1;
    }

    for(i=0; i<10; i++){

        printf("\nv:%d | v2:%d\n", v[i], v2[i]);

    }


}
