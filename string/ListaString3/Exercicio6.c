/*
    6. Cebolinha � um personagem de hist�ria em quadrinhos que quando falava, trocava o "r" pelo "l"
    (problema conhecido como dislalia). Fa�a um programa que gera uma vers�o de um texto fornecido com
    todos "r" e "rr" trocados por "l", exceto no caso em que o "r" ocorre no final de uma palavra.
*/

#include <stdio.h>

//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

//Biblioteca necess�ria para utilizar a fun��o toupper
#include <ctype.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara��o de uma String
    char texto[20];

    //Solicita ao usu�rio uma String e realiza a leitura da mesma
    printf("Informe uma palavra: ");
    gets(texto);

    //Percorre toda a String
    for (int i = 0; i < strlen(texto); i++) {

        //Verifica se a letra na posi��o i da String � igual a r/R e se a mesma na esta no final da String
        if ( tolower(texto[i]) == 'r' && i < (strlen(texto) - 1) ) {

            //Troca a letra r/R por l
            texto[i] = 'l';

        }

    }

    //Imprime a String manipulada
    puts(texto);

}
