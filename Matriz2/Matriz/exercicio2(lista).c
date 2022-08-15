#include <conio.h>
#include <math.h>
#include <stdio.h>
#define m1 2
#define m2 2

main(){

int i, j, mult = 1, m[m1][m2];

for(i=0; i<m1; i++){
    for(j=0; j<m2; j++)
    {
        printf("Entre com os elementos da Matriz:\n");
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<m1; i++){
    for(j=0; j<m2; j++)
    {
        mult = m[i][j] * 2;
    }

}

printf("A nova matriz eh: %d", mult);

}
