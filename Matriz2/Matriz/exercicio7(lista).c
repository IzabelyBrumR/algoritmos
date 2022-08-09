#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, j, m[3][3];

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("Entre com os elementos da Matriz: \n");
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        if(j == 3 - 1 - i)
        {
            printf("Estes sao os elementos da diagonal secundaria: %d \n", m[i][j]);
        }
    }
}


}
