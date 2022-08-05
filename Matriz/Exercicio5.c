#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(){

int i, j, m[5][5], x;
int maior_lin;
int maior_col;

printf("Entre com um numero:\n");
scanf("%d", &x);

for(i=0; i<5; i++){
    for(j=0; j<5; j++){

        if(m[i][j] == x){
            maior_lin = i;
            maior_col = j;
        }

    }
}

printf("A posição do valor na matriz eh:%d %d", maior_lin, maior_col);


}
