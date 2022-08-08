#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, A[3][3], soma = 0;

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("Entre com os elementos da Matriz:\n");
        scanf("%d", &A[i][j]);
    }

}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
     if(i < j)
     {
         soma = soma + A[i][j];
     }
    }
}

printf("A soma dos elementos acima da diagonal principal: %d\n", soma);

}
