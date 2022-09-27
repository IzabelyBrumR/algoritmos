#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str[5], str1[5];
int i, cont=0;

    for(i=0; i<5; i++){
        printf("Entre com o Gabarito da prova %d:\n", i);
        scanf("%c", &str[i]);
        fflush(stdin);

        printf("Entre com a sua resposta %d:\n", i);
        scanf("%c", &str1[i]);
        fflush(stdin);
    }

    for(i=0; i<5; i++){
        if(str[i] == str1[i])
        {
            cont++;
        }
    }

printf("Voce acertou: %d", cont);

}
