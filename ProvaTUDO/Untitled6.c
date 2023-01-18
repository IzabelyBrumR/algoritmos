#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

int A[5], B[5], i, rian, vitor;

    for(i=0; i<5; i++){
        printf("Entre com o valor do vetor A:\n");
        scanf("%d", &A[i]);

        printf("Entre com o valor do vetor B:\n");
        scanf("%d", &B[i]);
    }
    for(i=0; i<5; i++){
        rian = (A[i] + B[4 - i]);

        vitor += rian;
    }

    printf("%d", vitor);
}
