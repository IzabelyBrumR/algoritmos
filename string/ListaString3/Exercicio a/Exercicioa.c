/*
    a) (Valor 2.0) Faça um programa em que troque todas as ocorrências de uma letra L1
    pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo
    usuário.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){

    char L1, L2, texto[20];

    //Solicita a string
    printf("Informe uma string: ");
    gets(texto);

    //Solicita L1
    printf("Informe uma letra a ser substituida: ");
    scanf("\n%c", &L1);

    //Solicita L2
    printf("Informe a letra que colocar no lugar de %c: ",L1);
    scanf("\n%c", &L2);

    //Realiza a iteração letra a letra na String para buscar todas as ocorrências de L1 e trocar por L2
    for (int i = 0; i < strlen(texto); i++) {

        //Verifica se a letra na posição i é igual a L1
        if ( toupper(texto[i]) == toupper(L1) ) {

            //Se for igual a L1, troca por L2
            texto[i] = L2;

        }

    }

    //Imprime a String
    puts(texto);

}
