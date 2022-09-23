#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str[5], str1[5];
int i, cont=0;

    for(i=0; i<5; i++){
        puts("Entre com o Gabarito da prova:\n");
        gets(str);

        puts("Entre com a sua resposta:\n");
        gets(str1);
    }

    for(i=0; i<5; i++){
        if(str[i] == str1[i])
        {
            cont++;
        }
    }

printf("Voce acertou: %d", cont);

}

