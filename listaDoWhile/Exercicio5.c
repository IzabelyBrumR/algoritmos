#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int a, b, contador, somador;

    contador = 9;
    somador = 0;
    a = 21;
    b = 34;

    printf("A continuacao da serie de Fibonacci 1,1,2,3,5,8,13,21,34,.....");

    do{
        somador = a + b;
        contador ++;
        printf("%d e o proximo numero da sequencia \n", somador);
        a = b;
        b = somador;
    }
    while(contador<20);


}
