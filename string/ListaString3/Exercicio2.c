/*
    2. Escreva um programa que recebe do usuário uma string S, um caracter C, e uma posição l e devolve o
    índice da primeira posição da string onde foi encontrado o caracter C. A procura deve começar a partir da
    posição l.
*/

#include <stdio.h>

//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

int main() {

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    //Cria a variável l que controlará o for e a posicao que será informada pelo usuário e que definirá o
    //início da busca
    int l, posicao;

    //Declara a variável C que representa a letra que será buscada e declara a String S1
    char C, S1[10];

    //Solicita ao usuário a String, o caracter e a posição para iniciar a busca
    printf("Digite uma string: ");
    scanf("%s",&S1);
    printf("Digite uma letra: ");
    scanf("\n %c",&C);
    printf("Digite a posição em que deseja começar procurar: ");
    scanf("%d",&posicao);

    //Verifica se a posição informada é válida, ou seja, se não é maior que o tamanho da String
    while (posicao >= strlen(S1)) {

        //Se a posição não for válida, é solicitado que o usuário informe novamente a posição, até informar uma
        //posição válida
        printf("Digite uma posicao válida em que deseja começar procurar: ");
        scanf("%d",&posicao);

    }

    //Percorre a String a partir da posição informada pelo usuário, por isto l começa com o valor de posicao
    for (l = posicao; l < 10; l++) {

        //Testa se a letra na posição i é igual a letra buscada
        if (S1[l] == C) {

            //Se for igual informa ao usuário que a letra foi encontrada e a posição na qual foi encontrada
            printf("A primeira vez que o caracter %c aparece depois da posição %d \nna palavra é na posição %d",C,posicao,l);

            //O break é usado para quebrar o for
            break;

        }

    }

}
