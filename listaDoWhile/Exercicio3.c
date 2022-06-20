#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int x, contador = 0;

    printf("Entre com o numero da tabuada que voce deseja ver:\n");
    scanf("%d", &x);

    do{

        contador = contador + x;
        printf("%d e multiplo de %d\n", contador, x);

    }
    while(contador<(x * 10));


}
