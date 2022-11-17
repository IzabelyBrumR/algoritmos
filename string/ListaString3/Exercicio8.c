/*
    8. Criar um algoritmo que entre com uma palavra e imprima conforme exemplo a seguir:
    Exemplo: SONHO Como a palavra SONHO tem 5 letras a impress�o ficaria assim:
    SONHO
    SONHO SONHO
    SONHO SONHO SONHO
    SONHO SONHO SONHO SONHO
    SONHO SONHO SONHO SONHO SONHO
    Repare que foram impressos 5 vezes na horizontal e 5 na vertical.
*/

#include <stdio.h>

//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara a String
    char palavra[10];

    //Solicita ao usu�rio a String e realiza a leitura da mesma
    printf("Informe uma palavra: ");
    gets(palavra);

    //O primeiro for � respons�vel por controlar o n�mero de linhas que ser�o imprimidas
    for (int i = 0; i < strlen(palavra); i++) {

        //O segundo for controla o n�mero de vezes que palavra ser� imprimida em cada linha
        for (int j = 0; j <= i; j++) {

            //Imprime a String
            printf("%s ",palavra);

        }

        //Quebra a linha
        printf("\n");

    }

}
