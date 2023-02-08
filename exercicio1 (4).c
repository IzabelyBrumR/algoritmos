//Faça um programa que receba uma matriz 5x5 valores do tipo int do
//usuário, um valor de cada vez, e imprima a sua matriz transposta (Obs: a matriz transposta
//é obtida permutando se as linhas e as colunas de uma matriz) trocaer??? coluna por lado?

#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

main(){

int m[3][3], i, j, mT[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            printf("Entre com o valor da matriz:\n");
            scanf("%d", &m[i][j]);

        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            mT[i][i] = 0;
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            mT[i][j] = m[j][i];

 printf("%d\n", mT[i][j]);
        }
    }


}
