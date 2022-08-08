#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, maior = 0;
float divisao[2][2], A[2][2];

for(i=0; i<2; i++){
    for(j=0; j<2; j++)
    {
        printf("Entre com os elementos da Matriz A:\n");
        scanf("%f", &A[i][j]);
    }
}

for(i=0; i<2; i++){
    for(j=0; j<2; j++)
    {
        if(i==j)
        {
            if(A[i][j] > maior)
            {
                maior = A[i][j];
            }
        }
    }
}

for(i=0; i<2; i++){
    for(j=0; j<2; j++)
    {
        divisao[i][j] = A[i][j] / maior;
    }
}

for(i=0; i<2; i++){
    for(j=0; j<2; j++)
    {
        printf("Matriz A:%f\n", A[i][j]);
        printf("Matriz Divisao:%f\n", divisao[i][j]);
    }
}

printf("Maior: %d\n", maior);
}
