#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


main(){

char str[20], str2[20];
int i, opcao, tamanho, caractere, cont = 0, letra, letra2;

    for(i=0; i<6; i++){

        printf("\nEntre com a string 1: \n");
        gets(str);

        printf("\nEntre com a string 2:\n");
        gets(str2);

    do{
        printf("\nDigite 01 para ver o tamanho da string 1\n");
        printf("Digite 02 para comparar a primeira string com a segunda\n");
        printf("Digite 03 para juntar a primeira string com a segunda\n");
        printf("Digite 04 para inverter a primeira string\n");
        printf("Digite 05 para contar quantos determinado caractere aparece na primeira string\n");
        printf("Digite 06 para substituir a primeira ocorrencia do caractere C1 da primeira string pelo caractere C2. OS caracteres C1 e C2 serao lidos pelo usuario\n");
        printf("Digite 07 para sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                tamanho = strlen(str);
                printf("\nA string tem tamanho: %d\n", tamanho);
            break;

            case 2:
                if(strcmp(str, str2))
                {
                    printf("\nAs strings sao diferentes\n");
                }

                else
                {
                    printf("\nAs strings sao iguais:\n");
                }
            break;

            case 3:
                strcat(str, str2);
                printf("\nAs duas strings juntas:\n");
                printf("\n%s\n", str);
            break;

            case 4:
                strrev(str);
                printf("\nA string 1 invertida\n");
                printf("\n%s\n", str);
            break;

            case 5:
                fflush(stdin);
                printf("\nEntre com um caractere para contar quantas vezes ele aparece na string 1\n");
                scanf("\n%c", &caractere);
                fflush(stdin);

                for(i=0; i<20; i++){
                    if(str[i] == caractere)
                    {
                        cont++;
                    }
                }
                printf("\nEsse caractere aparece : %d vezes\n", cont);
            break;

            case 6:
                printf("\nEntre com o caractere que voce quer retirar\n");
                scanf("\n%c", &letra);

                printf("\nEntre com o caractere para substituir\n");
                scanf("\n%c", &letra2);

                for(i=0; i<20; i++){

                    if(str[i] == letra)
                    {
                        str[i] = letra2;
                        break;
                    }

                }
                printf("\n%s\n", str);
            break;

            case 7:
                return -1;

        }

    }while(str != 8 || str2 != 8);

}
}

