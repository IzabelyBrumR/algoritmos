#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(){

int i, j, A[2][2], B[2][2], C[2][2];

for(i=0; i<2; i++){
    for(j=0; j<2; j++)
    {
        printf("Entre com os elementos da Matriz A:\n");
        scanf("%d", &A[i][j]);

        printf("Entre com os elementos da Matriz B:\n");
        scanf("%d", &B[i][j]);

        C[i][j] = A[i][j] + B[i][j];

    }
}
for(i=0; i<2; i++){
    for(j=0; j<2; j++)
    {
        printf("Os elementos da Matriz: %d\n", C[i][j]);

    }
}
}
