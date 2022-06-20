#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int cont = 0, contador = 4;

    do{

        contador = contador + 4;
        cont++;
        printf("%d e multiplo de 4 \n", contador);

    }
    while(contador<=87);

    printf("Os numeros multiplos de 4 entre 5 e 87 sao: %d", cont);

}
