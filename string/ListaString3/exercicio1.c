#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

char str[20], str2[20];
int i, opcao;

    for(i=0; i<6; i++){

        printf("Entre com a string 1: \n");
        gets(str);

        printf("Entre com a string 2:\n");
        gets(str2);

        printf("Digite 01 para ver o tamanho da string 1\n");
        printf("Digite 02 para comparar a primeira string com a segunda\n");
        printf("Digite 03 para juntar a primeira string com a segunda\n");
        printf("Digite 04 para inverter a primeira string\n");
        printf("Digite 05 para contar quantos determinado caractere aparece na primeira string\n");
        printf("Digite 06 para substituir a primeira ocorrencia do caractere C1 da primeira string pelo caractere C2. OS caracteres C1 e C2 serao lidos pelo usuario\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                tamanho = strlen(str);
                printf("A string tem tamanho: %d", tamanho);





        }





    }






}
