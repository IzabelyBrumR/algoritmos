#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strupr = transforma a letra de minuscula para maiuscula

//   STRUPR

main(){

    char str[100];
    printf("Entre com uma string:\n");
    gets(str);

    strupr(str);
    printf("\nA string resultante eh: %s", str);
}
