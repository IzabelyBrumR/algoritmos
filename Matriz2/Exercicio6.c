#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, soma = 0, mult = 1, m[3][3], soma1 = 0, soma2 = 0;

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("Entre com os valores da Matriz:\n");
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<3; i++){
    for(j=0; j<1; j++)
    {
        soma = soma + m[i][j];
    }
}
for(i=0; i<1; i++){
    for(j=0; j<3; j++)
    {
        mult = mult * m[i][j];
    }
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        soma1 = soma1 + m[i][j];
    }
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        if(i == j){
            soma2 = soma2 + m[i][j];
        }
    }
}

printf("A soma dos elementos da primeira coluna: %d\n", soma);
printf("O produto dos elementos da primeira linha: %d\n", mult);
printf("A soma de todos os elementos: %d\n", soma1);
printf("A soma dos elementos da diagonal principal: %d\n", soma2);
}
