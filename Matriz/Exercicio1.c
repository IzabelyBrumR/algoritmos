#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int v[2], i, m[2][2], cont=0, j;

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("Entre com os valores:\n");
        scanf("%d", &m[i][j]);

        if(m[i][j] > 10){
            cont++;
        }
    }
}

printf("%d sao os numeros maiores que 10", cont);

}
