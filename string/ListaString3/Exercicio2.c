/*
    2. Escreva um programa que recebe do usu�rio uma string S, um caracter C, e uma posi��o l e devolve o
    �ndice da primeira posi��o da string onde foi encontrado o caracter C. A procura deve come�ar a partir da
    posi��o l.
*/

#include <stdio.h>

//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    //Cria a vari�vel l que controlar� o for e a posicao que ser� informada pelo usu�rio e que definir� o
    //in�cio da busca
    int l, posicao;

    //Declara a vari�vel C que representa a letra que ser� buscada e declara a String S1
    char C, S1[10];

    //Solicita ao usu�rio a String, o caracter e a posi��o para iniciar a busca
    printf("Digite uma string: ");
    scanf("%s",&S1);
    printf("Digite uma letra: ");
    scanf("\n %c",&C);
    printf("Digite a posi��o em que deseja come�ar procurar: ");
    scanf("%d",&posicao);

    //Verifica se a posi��o informada � v�lida, ou seja, se n�o � maior que o tamanho da String
    while (posicao >= strlen(S1)) {

        //Se a posi��o n�o for v�lida, � solicitado que o usu�rio informe novamente a posi��o, at� informar uma
        //posi��o v�lida
        printf("Digite uma posicao v�lida em que deseja come�ar procurar: ");
        scanf("%d",&posicao);

    }

    //Percorre a String a partir da posi��o informada pelo usu�rio, por isto l come�a com o valor de posicao
    for (l = posicao; l < 10; l++) {

        //Testa se a letra na posi��o i � igual a letra buscada
        if (S1[l] == C) {

            //Se for igual informa ao usu�rio que a letra foi encontrada e a posi��o na qual foi encontrada
            printf("A primeira vez que o caracter %c aparece depois da posi��o %d \nna palavra � na posi��o %d",C,posicao,l);

            //O break � usado para quebrar o for
            break;

        }

    }

}
