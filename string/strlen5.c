#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strlen = conta e retorna os caracteres da string = tamanho


//  STRLEN

main(){

    int tamanho;
    char str[100];

    printf("Entre com uma string:\n");
    gets(str);

    tamanho = strlen(str);

    printf("\n\n A string que voce digitou tem tamanho %d\n", tamanho);

}
