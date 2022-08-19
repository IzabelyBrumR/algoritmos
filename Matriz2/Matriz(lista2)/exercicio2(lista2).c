#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, j;
int m[3][3], aux;

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("Entre com os elementos da Matriz:\n");
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<2; i++){
    for(j=0; j<3; j++)
    {
        if(i < j){
            aux = m[j][i];
            m[j][i] = m[i][j];
            m[i][j] = aux;
        }
    }
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("%d", m[i][j]);
    }
    printf("\n");
}
}
