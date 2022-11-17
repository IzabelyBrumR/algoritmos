/*
    7. Faça um programa que lê uma linha de texto em uma string (sequência de caracteres terminada por '\0')
    e que conta o número de ocorrências de cada letra do alfabeto.
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

    //Declara um vetor que armazenará todos os contadores das letras, um em cada indice do vetor
    int contadorLetra[26];

    //Solicita ao usuário uma String e realiza a leitura da mesma
    printf("Informe uma palavra: ");
    gets(texto);

    //Este for inicializa todos os contadores das letras com 0
    for (int i = 0; i < 26; i++) {

        contadorLetra[i] = 0;

    }

    //O primeiro for irá percorrer toda a String
    for (int i = 0; i < strlen(texto); i++) {

        //Este segundo vetor irá percorrer todas as letras do alfabeto
        for (int j = 0;j < 26; j++) {

            /*
                Testa a letra na posição i na String é igual a cada uma das letras do Alfabeto.
                Neste exercício usei o conhecimento sobre a Tabela ASCII e que podemos tratar letras pelo
                número que o representa. Por exemplo, a letra 'a' é representada pelo 97, por isto somei o
                j a 97 para que fosse possível testar cada letra do alfabeto.
            */
             if( tolower(texto[i]) == (j+97) ){

                /*
                    O índice j auxilia no incremento da quantidade da letra que foi encontrada, por exemplo o
                    contador da letra 'a' estará na posição do vetor e assim por diante.
                */
                contadorLetra[j]++;

                /*
                    O break é usado para que quando se encontre a letra da posição i, o laço do for que
                    percorre as letras do Alfabeto seja quebrado.
                */
                break;

            }

        }

    }

    for (int i = 0; i < 26; i++) {

        //Imprime a quantidade de vezes que cada letra apareceu na String
        printf("A letra %c se repetiu %d vezes.\n",(i+97),contadorLetra[i]);

    }

}
