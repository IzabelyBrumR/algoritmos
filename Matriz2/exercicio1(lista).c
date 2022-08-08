#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, m[4][4], soma = 0, soma1 = 0;

for(i=0; i<4; i++){
    for(j=0; j<4; j++)
    {
        printf("Entre com os elementos da Matriz:\n");
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<4; i++){
    for(j=0; j<4; j++)
    {
        if( i == j)
        {
            soma = soma + m[i][j];
        }
    }
}

for(i=0; i<4; i++){
    for(j=0; j<4; j++)
    {
        if (j == 4 - 1 - i)
        {
            soma1 = soma1 + m[i][j];
        }
    }

}

printf("A soma dos elementos da diagonal principal: %d\n", soma);
printf("A soma dos elementos da diagonal secundaria: %d\n", soma1);

}
