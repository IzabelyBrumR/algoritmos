#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str[100], letra;

    printf("Entre com uma letra:\n");
    scanf("%c", letra);

    printf("Entre com uma frase de até 100 caracteres:\n");
    gets(str);

    if(letra == str)

        str = str - letra;
        printf("A nova string eh: %s", str);

    else
        puts(str);
        puts("\n");
        system("Pause");
}

