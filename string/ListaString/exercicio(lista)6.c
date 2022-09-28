#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str[100], str2[100];
int tamanho = 0, tamanho1 = 0, valor;

        printf("Entre com uma palavra\n");
        gets(str);

        printf("Entre com uma palavra\n");
        gets(str2);

        if(strcmp(str, str2)== 0)
        {
            printf("As palavras sao iguais\n");
        }
        else{

            if(strlen(str) == strlen(str2)){
                printf("As palavras tem o mesmo tamanho\n");
            }

            else if(strlen(str) > strlen(str2)){
                printf("A primeira palavra eh maior\n");
            }

            else{
                printf("A segunda palavra eh maior\n");
            }
        }

}
