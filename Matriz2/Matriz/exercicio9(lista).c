#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

int i, j, m[3][3];
float soma = 0, media = 0;

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("Entre com os elementos da Matriz:\n");
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        if(i > j)
        {
            soma = soma + m[i][j];
        }
    }
}

media = soma /3;
printf("A media dos elementos que estao abaixo da diagonal principal:%f", media);

}
