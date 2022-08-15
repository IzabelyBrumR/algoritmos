#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

int m[3][3], mpar[3][3];
int i, j;

for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    {
        printf("Entre com os valores da Matriz:\n");
        scanf("%d", &m[i][j]);
    }

printf("A matriz:\n");
for(i=0; i<3; i++){
    for (j=0; j<3; j++)
    {
        printf("%d", m[i][j]);
    }
        printf("\n\n");
        printf("\t\n");
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        if((i + j)%2==0)
        {
            mpar[i][j] = m[i][j];
        }
    }
}

for(i=0; i<3; i++){
    for (j=0; j<3; j++)
    {
        printf("A matriz cuja a soma da coluna mais linha resulta em um numero par:%d\n", mpar[i][j]);
    }
}



}
