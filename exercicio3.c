//Suponha que voc� est� fazendo uma pesquisa de pre�os para a compra de
//um tablet. Para auxili�-lo, escreva um programa que permite o cadastro de v�rios
//registros, cada um contendo o nome de uma loja, o seu telefone, e o pre�o do tablet
//naquela loja. Os dados para cada loja podem ser fornecidos no pr�prio c�digo. O
//programa deve calcular a m�dia dos pre�os encontrados e mostrar uma rela��o contendo
//o nome e o telefone das lojas que tinham o tablet com pre�o abaixo da m�dia.

#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

struct  loja{

    char nome[20];
    int telefone;
    float tablet;

}loja[10];

main(){

int i, media = 0, valor = 0;

    for(i=0; i<3; i++){

        fflush(stdin);
        printf("Entre com o nome da loja:\n");
        gets(loja[i].nome);
        fflush(stdin);

        printf("Entre com o telefone da loja:\n");
        scanf("%d", &loja[i].telefone);

        printf("Entre com o valor do tablet:\n");
        scanf("%f", &loja[i].tablet);

        valor = valor + loja[i].tablet;

    }

    media = valor / 3;

    for(i=0; i<3; i++){
            if(loja[i].tablet < media){

                printf("As lojas que tem o tablet com o valor abaixo da media: %s\n", loja[i].nome);
                printf("o numero das lojas: %d\n", loja[i].telefone);

            }
    }

    printf("A media dos valores: %d\n", media);






}
