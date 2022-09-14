#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

    int i;
    char nome[7];

    printf("Informe o nome de uma pessoa com o maximo de 7 caracteres:\n");
    scanf("%s", nome);

    for(i=0; i<7; i++)
    {
        printf("%c", nome[6-i]);
    }

    getch();
    return 0;

}
