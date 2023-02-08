//) Faça um programa que dado 2 palavras, determine:
//a. Se as palavras são iguais;
//b. Caso as palavras sejam diferentes, qual delas tem maior comprimento (não
//esquecer a possibilidade de existirem palavras diferentes de mesmo tamanho);
//c. Verifique se a segunda palavra é uma sub string da primeira:
//Exemplo:
//Palavra 1= casamento
//Palavra 2 = casa

#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

main(){

char palavra[100], palavra2[100];
int tamanho, tamanho2;

    fflush(stdin);
    printf("Entre com uma palavra:\n");
    gets(palavra);

    printf("Entre com uma segunda palavra:\n");
    gets(palavra2);
    fflush(stdin);

    if(strcmp(palavra, palavra2)){

        printf("As palavras sao diferentes\n");
        tamanho = strlen(palavra);
        tamanho2 = strlen(palavra2);

        if(tamanho == tamanho2){

            printf("Elas tem o mesmo tamanho\n");

        } else if(tamanho < tamanho2){

            printf("A segunda eh maior\n");

        } else{
            printf("A primeira eh maior\n");
        }

    }else{
        printf("As palavras sao iguais\n");
        printf("Elas tem o mesmo tamanho\n");
    }

    if(strcmp(palavra,palavra2)){


    }
}

