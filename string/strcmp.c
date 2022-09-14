#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strcmp = comparação

//   STRCMP

main(){

    char str[100], str2[100];

    printf("Entre com uma string:\n");
    gets(str);

    printf("Entre com uma segunda string:\n");
    gets(str2);

    if(strcmp(str, str2))
        printf("\n As duas strings sao diferentes:\n");

    else
        printf("\nString iguais");

}
