#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(){

int i, j, m[4][4], maior=0;
int maior_lin;
int maior_col;

for(i=0; i<4; i++){
    for(j=0; j<4; j++){

        printf("Entre com os valores:\n");
        scanf("%d", &m[i][j]);

        if(m[i][j] > maior){
            maior = m[i][j];
            maior_lin =i;
            maior_col = j;
        }
    }
}

printf("O maior valor eh: %d linhas: %d %d", maior, maior_lin, maior_col);

}
