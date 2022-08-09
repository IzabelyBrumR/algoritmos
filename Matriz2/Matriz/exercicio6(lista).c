#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, m[3][3], menor=100000000, menor1=100000000000;

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
        if(i + j >= 3 +2)
        {
            if(m[i][j] < menor)
            {
                menor = m[i][j];
            }
        }
    }
}
for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        if(i + j <= 3)
        {
            if(m[i][j] < menor1)
            {
                menor1 = m[i][j];
            }
        }
    }
}

printf("O menor valor dos elementos abaixo da diagonal secundaria: %d\n", menor);
printf("O menor valor dos elementos acima da diagonal secundaria: %d\n", menor1);
}
