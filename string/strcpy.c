#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// strcpy = copia

//   STRCPY

main(){

    char str1[100], str2[100], str3[100];

    printf("Entre com uma string:\n");
    gets(str1);

    strcpy(str2, str1);
    strcpy(str3, "Voce digitou a string:\n");

    printf("\n\n %s%s", str3, str2);

}
