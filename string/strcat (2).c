#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// strcat = junta strings, conecta uma ao fim da outra



//  STRCAT

main(){

    char str1[100], str2[100];

    printf("Entre com uma string:\n");
    gets(str1);
    gets(str2);

    strcat(str1, str2);
    printf("\n %s", str1);

}

