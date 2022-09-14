#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strset = transforma a string em caracteres (especificado pelo usuario) (senhas)

//   STRSET

main(){

    char string[20];
    char caractere[2];

    printf("\n");
    printf("Substituindo os caracteres da string\n");
    printf("_____________________________________");

    printf("\n");
    printf("Digite a String:\n");
    scanf("%s", string);

    printf("\n");
    scanf("%s", caractere);

    printf("\n");
    printf("Substituindo ==> %s", strset(string, caractere[0]));

    return 0;
}

