#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int A[6], i, soma=0;

A[0] = 1;
A[1] = 0;
A[2] = 5;
A[3] = -2;
A[4] = 100;
A[5] = 7;

soma = A[0] + A[1] + A[5];
printf("A soma do primeiro, segundo e quinto valor do vetor eh: %d\n", soma);



for(i=0; i<6; i++){

    printf("Valor do vetor A: %d\n", A[i]);

}


}
