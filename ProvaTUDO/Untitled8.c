#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

main(){

char str[10], str1[10];
int i, cont=0, matricula;

    for(i=0; i<3; i++){

            printf("Entre com a sua matricula:\n");
            scanf("%d", &matricula);
            fflush(stdin);

        for(i=0; i<10; i++){
            printf("Entre com o Gabarito da prova %d:\n", i+1);
            scanf("%c", &str[i]);
            fflush(stdin);

            printf("Entre com a sua resposta %d:\n", i+1);
            scanf("%c", &str1[i]);
            fflush(stdin);
    }

        for(i=0; i<10; i++){
            if(str[i] == str1[i])
            {
                cont++;
            }
        }
    }

    for(i=0; i<3; i++){

        printf("Matricula: %d\n", matricula);

        for(i=0; i<10; i++){
            printf("Resposta %d do aluno: %c\n",i+1, str1[i]);

        }
    }

printf("Voce acertou: %d%%\n", cont*10);

}

