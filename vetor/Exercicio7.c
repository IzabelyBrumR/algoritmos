#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int A[6], i, B[6], impar;

    for(i=0; i<6; i++){

        printf("\nEntre com os numeros para o conjunto A:\n");
        scanf("%d", &A[i]);

        if(A[i]%2==0){

                B[i] = A[i] + 20;

        }
        else

            B[i] = A[i] * 3;

        }

    for(i=0; i<6; i++){

        printf("O conjunto B:%d\n", B[i]);

    }


}
