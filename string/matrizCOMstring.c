#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strset = transforma a string em caracteres (especificado pelo usuario) (senhas)

//   MATRIZ COM STRING

main(){

    int i, notas[5][3], j;
    char alunos[5][15];
    float mediaaluno, mediaturma = 0;

    for(i=0; i<5; i++){

        printf("Informe o nome do aluno:\n");
        scanf("%s", alunos[i]);

        mediaaluno = 0;

        for(j=0; j<3; j++){

            printf("Informe a nota: %d\n", j, "do aluno");
            scanf("%d", &notas[i][j]);

            mediaaluno = mediaaluno + notas[i][j];
        }

        mediaturma = mediaturma + (mediaaluno/3);
    }

mediaturma = mediaturma/5;
printf("Seguem alunos que tiveram nota maior que a media geral");

    for(i=0; i<5; i++){
        j=0;

        while(j < 3){

            if(notas[i][j] > mediaturma)
            {
                printf("\n %s %d", alunos[i], notas[i][j]);
                j=2;
            }

            j = j + 1;
        }
    }

getch();
}

