/*
    7. Fa�a um programa que l� uma linha de texto em uma string (sequ�ncia de caracteres terminada por '\0')
    e que conta o n�mero de ocorr�ncias de cada letra do alfabeto.
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

    //Declara um vetor que armazenar� todos os contadores das letras, um em cada indice do vetor
    int contadorLetra[26];

    //Solicita ao usu�rio uma String e realiza a leitura da mesma
    printf("Informe uma palavra: ");
    gets(texto);

    //Este for inicializa todos os contadores das letras com 0
    for (int i = 0; i < 26; i++) {

        contadorLetra[i] = 0;

    }

    //O primeiro for ir� percorrer toda a String
    for (int i = 0; i < strlen(texto); i++) {

        //Este segundo vetor ir� percorrer todas as letras do alfabeto
        for (int j = 0;j < 26; j++) {

            /*
                Testa a letra na posi��o i na String � igual a cada uma das letras do Alfabeto.
                Neste exerc�cio usei o conhecimento sobre a Tabela ASCII e que podemos tratar letras pelo
                n�mero que o representa. Por exemplo, a letra 'a' � representada pelo 97, por isto somei o
                j a 97 para que fosse poss�vel testar cada letra do alfabeto.
            */
             if( tolower(texto[i]) == (j+97) ){

                /*
                    O �ndice j auxilia no incremento da quantidade da letra que foi encontrada, por exemplo o
                    contador da letra 'a' estar� na posi��o do vetor e assim por diante.
                */
                contadorLetra[j]++;

                /*
                    O break � usado para que quando se encontre a letra da posi��o i, o la�o do for que
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
