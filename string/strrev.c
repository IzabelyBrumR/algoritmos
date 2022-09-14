#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strrev = coloca a string de trás para frente

//   STRREV

main(){

    char str[100];
    printf("Entre com uma string:\n");
    gets(str);

    strrev(str);
    printf("\nA string resultante eh: %s", str);
}

