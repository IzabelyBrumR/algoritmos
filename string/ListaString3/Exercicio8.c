/*
    8. Criar um algoritmo que entre com uma palavra e imprima conforme exemplo a seguir:
    Exemplo: SONHO Como a palavra SONHO tem 5 letras a impressão ficaria assim:
    SONHO
    SONHO SONHO
    SONHO SONHO SONHO
    SONHO SONHO SONHO SONHO
    SONHO SONHO SONHO SONHO SONHO
    Repare que foram impressos 5 vezes na horizontal e 5 na vertical.
*/

#include <stdio.h>

//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

int main() {

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara a String
    char palavra[10];

    //Solicita ao usuário a String e realiza a leitura da mesma
    printf("Informe uma palavra: ");
    gets(palavra);

    //O primeiro for é responsável por controlar o número de linhas que serão imprimidas
    for (int i = 0; i < strlen(palavra); i++) {

        //O segundo for controla o número de vezes que palavra será imprimida em cada linha
        for (int j = 0; j <= i; j++) {

            //Imprime a String
            printf("%s ",palavra);

        }

        //Quebra a linha
        printf("\n");

    }

}
