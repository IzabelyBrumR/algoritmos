#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str[100];

    printf("Entre com uma frase de até 100 caracteres:\n");
    gets(str);

    strupr(str);
    printf("\nA string resultante eh: %s", str);

}
