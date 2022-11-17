/*
    6. Cebolinha é um personagem de história em quadrinhos que quando falava, trocava o "r" pelo "l"
    (problema conhecido como dislalia). Faça um programa que gera uma versão de um texto fornecido com
    todos "r" e "rr" trocados por "l", exceto no caso em que o "r" ocorre no final de uma palavra.
*/

#include <stdio.h>

//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

//Biblioteca necessária para utilizar a função toupper
#include <ctype.h>

int main() {

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declaração de uma String
    char texto[20];

    //Solicita ao usuário uma String e realiza a leitura da mesma
    printf("Informe uma palavra: ");
    gets(texto);

    //Percorre toda a String
    for (int i = 0; i < strlen(texto); i++) {

        //Verifica se a letra na posição i da String é igual a r/R e se a mesma na esta no final da String
        if ( tolower(texto[i]) == 'r' && i < (strlen(texto) - 1) ) {

            //Troca a letra r/R por l
            texto[i] = 'l';

        }

    }

    //Imprime a String manipulada
    puts(texto);

}
