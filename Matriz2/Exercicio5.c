#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, A[3][3], mult = 1;

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
     if(i > j)
     {
         mult = mult * A[i][j];
     }
    }
}

printf("\nA multiplicacao dos elementos abaixo da diagonal principal: %d\n", mult);

}



