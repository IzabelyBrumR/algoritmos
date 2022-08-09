#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, A[3][3], B[3][3], soma = 0, mult = 1, divisao = 1, sub = 0, operacoes, divisao1 = 1;

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("Entre com os elementos da Matriz A:\n");
        scanf("%d", &A[i][j]);

        printf("Entre com os elementos da Matriz B:\n");
        scanf("%d", &B[i][j]);
    }
}

printf("Entre com 001 para fazer a soma das matrizes\n");
printf("Entre com 002 para fazer a divisao da Matriz A pela B\n");
printf("Entre com 003 para fazer a divisao da Matriz B pela A\n");
printf("Entre com 004 para fazer a subtracao das matrizes\n");
printf("Entre com 005 para fazer a multiplicacao das matrizes\n");
scanf("%d", &operacoes);

switch (operacoes){

    case 001:
        soma = A[i][j] + B[i][j];
        printf("A soma das matrizes: %d\n", soma);
            break;

    case 002:
        divisao = A[i][j] + B[i][j];
        printf("A divisão da Matriz A pela B: %d\n", divisao);
            break;

    case 003:
        divisao1 = B[i][j] + A[i][j];
        printf("A divisao da Matriz B pela A: %d\n", divisao1);
            break;

    case 004:
        sub = A[i][j] - B[i][j];
        printf("A subtracao da Matriz A pela B: %d\n", sub);
            break;

    case 005:
        mult = A[i][j] * B[i][j];
        printf("A multiplicacao das matrizes: %d\n", mult);
            break;

}
}
