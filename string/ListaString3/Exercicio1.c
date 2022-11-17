/*
    1- Fa�a um programa que contenha um menu com as seguintes op��es:
    (a) Ler uma string S1 (tamanho maximo 20 caracteres);
    (b) Imprimir o tamanho da string S1;
    (c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da compara��o;
    (d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenac�o;
    (e) Imprimir a string S1 de forma reversa;
    (f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo
    usuario;
    (g) Substituir a primeira ocorr�ncia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2
    ser�o lidos pelo usu�rio;
*/

#include <stdio.h>

//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

//Biblioteca necess�ria para utilizar a fun��o toupper
#include <ctype.h>

//Biblioteca necess�ria para utilizar a fun��o system("cls")
#include <stdlib.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara as vari�veis
    char S1[20],S2[20],C1,C2,opcao;
    int contador = 0;

    do{

        //Imprime o menu
        printf("\n----------------------------- MENU ------------------------------------------\n");
        printf("Digite 'a' - Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("Digite 'b' - Imprimir o tamanho da string S1\n");
        printf("Digite 'c' - Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da compara��o\n");
        printf("Digite 'd' - Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenac�o\n");
        printf("Digite 'e' - Imprimir a string S1 de forma reversa\n");
        printf("Digite 'f' - Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usu�rio\n");
        printf("Digite 'g' - Substituir a primeira ocorr�ncia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 ser�o lidos pelo usu�rio\n");
        printf("Digite 's' - SAIR\n");

        //Solicita a op��o desejada
        fflush(stdin);
        printf("Informe a op��o desejada: ");
        scanf("%c",&opcao);

        //Fun��o usada para limpar a tela
        system("cls");

        switch(tolower(opcao)){

            case 'a':

                //Solicita e l� a String S1
                fflush(stdin);
                printf("Informe S1: ");
                gets(S1);

            break;

            case 'b':

                //Imprime o tamanho de String S1
                printf("\nO tamanho de S1 � %d.\n",strlen(S1));

            break;

            case 'c':

                //Solicita e l� a String S2
                fflush(stdin);
                printf("Informe S2: ");
                gets(S2);

                //Verifica se s�o iguais ou qual � Alfabeticamente maior
                if (strcmp(S1,S2) == 0) {

                    printf("As Strings S1 e S2 s�o iguais.\n");

                } else if (strcmp(S1,S2) > 0) {

                    printf("A String S1 � Alfabeticamente maior que a String S2.\n");

                } else {

                    printf("A String S2 � Alfabeticamente maior que a String S1.\n");

                }

            break;

            case 'd':

                //Solicita e l� a String S2
                fflush(stdin);
                printf("Informe S2: ");
                gets(S2);

                //Concatena S1 e S2
                printf("A concatena��o das duas Strings �: \n%s\n",strcat(S1,S2));

            break;

            case 'e':

                //Inverte S1
                printf("A String S1 inversa �: \n%s\n",strrev(S1));

            break;

            case 'f':

                //Solicita e l� C1
                fflush(stdin);
                printf("Informe C1: ");
                scanf("%c",&C1);

                //Percorre a String S1 e verifica quantas vezes C1 aparece
                for (int i = 0; i < strlen(S1); i++) {

                    //Testa se a letra na posi��o i de S1 � igual a C1
                    if (S1[i] == C1){

                        //Se for igual, incrementa o contador
                        contador++;

                    }

                }

                //Imprime quantas vezes C1 aparece em S1
                printf("A letra %c aparece %d vezes na String S1.\n",C1,contador);

                //Zera o contador
                contador = 0;

            break;

            case 'g':

                //Solicita e l� C1 e C2
                fflush(stdin);
                printf("Informe C1: ");
                scanf("%c",&C1);

                fflush(stdin);
                printf("Informe C2: ");
                scanf("%c",&C2);

                //Percorre S1
                for (int i = 0; i < strlen(S1); i++) {

                    //Testa se a letra na posi��o i de S1 � igual a C1
                    if (S1[i] == C1){

                        //Se for, substitui por C2
                        S1[i] = C2;

                    }

                }

                puts(S1);

            break;

        }

    //Transforma a op��o informada em min�sculo para facilitar o teste
    }while (tolower(opcao) != 's');

}
