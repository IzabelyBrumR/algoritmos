#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(){

int i, j, soma = 0, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
float m[3][5];

for(i=0; i<3; i++){
    for(j=0; j<5; j++)
    {
        printf("Entre com os elementos da Matriz:\n");
        scanf("%f", &m[i][j]);
    }
}
for(i=0; i<3; i++){
    for(j=0; j<1; j++)
    {
        soma = soma + m[i][j];
    }
}

for(i=0; i<3; i++){
    for(j=1; j<2; j++)
    {
        soma1 = soma1 + m[i][j];
    }
}

for(i=0; i<3; i++){
    for(j=2; j<3; j++)
    {
        soma2 = soma2 + m[i][j];
    }
}

for(i=0; i<3; i++){
    for(j=3; j<4; j++)
    {
        soma3 = soma3 + m[i][j];
    }
}

for(i=0; i<3; i++){
    for(j=4; j<5; j++)
    {
        soma4 = soma4 + m[i][j];
    }
}

printf("A soma dos elementos da primeira coluna: %d\n", soma);
printf("A soma dos elementos da segunda coluna: %d\n", soma1);
printf("A soma dos elementos da terceira coluna: %d\n", soma2);
printf("A soma dos elementos da quarta coluna: %d\n", soma3);
printf("A soma dos elementos da quinta coluna: %d\n", soma4);
}
