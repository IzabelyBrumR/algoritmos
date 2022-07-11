#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

    int n, mult, i, soma;
    mult=0;
    n=1;

    for(i=0; i<=64; i++){
        mult = n * 2;
        n = n + mult;
    }
    printf("\n A rainha deve %d graos de trigo para o monge\n", n);
}
