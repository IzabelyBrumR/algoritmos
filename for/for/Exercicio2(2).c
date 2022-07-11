#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

    int times, estado, cont1= 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, soma = 0, cont6 = 0, cont7 = 0;
    float media = 0, salario;

        printf("\nQual seu time do coracao:\n");
        printf("\nDigite 1 para Fluminense\n");
        printf("\nDigite 2 para Botafogo\n");
        printf("\nDigite 3 para Vasco\n");
        printf("\nDigite 4 para Flamengo\n");
        printf("\nDigite 5 para Outros\n");
        scanf("%d", &times);

    while( times != 0){

        printf("\nOnde voce mora?\n");
        printf("\nDigite 1 para RJ\n");
        printf("\nDigite 2 para Niteroi\n");
        printf("\nDigite 3 para Outros\n");
        scanf("%d", &estado);

        printf("\nQual o seu salario?\n");
        scanf("%f", &salario);

        switch( times ){

            case (1):

                if( estado == 2){
                    cont7++;
                }

                cont1++;
                break;

            case (2):

                soma = soma + salario;

                cont2++;
                break;

            case(3):
                cont3++;
                break;

            case(4):
                cont4++;
                break;

            case(5):

                if( estado == 1 ){
                    cont6++;
                }

                cont5++;
                break;
        }
        printf("\nQual seu time do coracao:\n");
        printf("\nDigite 1 para Fluminense\n");
        printf("\nDigite 2 para Botafogo\n");
        printf("\nDigite 3 para Vasco\n");
        printf("\nDigite 4 para Flamengo\n");
        printf("\nDigite 5 para Outros\n");
        scanf("%d", &times);


    }

media = soma / cont2;

printf("\nNumero de torcedores do Fluminense: %d", cont1);
printf("\nNumero de torcedores do Botafogo: %d", cont2);
printf("\nNumero de torcedores do Vasco: %d", cont3);
printf("\nNumero de torcedores do Flamengo: %d", cont4);
printf("\nNumero de torcedores do Outros: %d", cont5);
printf("\nA media dos salarios dos torcedores do Botafogo: %f", media);
printf("\nO numero de pessoas que moram no RJ e torcem para outro time: %d", cont6);
printf("\nO numero de pessoas que moram em Niteroi e torcem para o Fluminense: %d", cont7);




}
