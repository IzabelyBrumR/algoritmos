#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

int i, voto, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;

    for(i=0; i<3; i++){

        printf("Vote:\n");
        printf("Digite 1 para o candidato 1\n");
        printf("Digite 2 para o candidato 2\n");
        printf("Digite 3 para o candidato 3\n");
        printf("Digite 4 para o candidato 4\n");
        printf("Digite 5 para o voto nulo\n");
        printf("Digite 6 para o voto em branco\n");
        printf("Digite 7 para o fim da votacao\n");
        scanf("%d", &voto);

        switch (voto){

        case(1):
            cont1++;
            break;

        case(2):
            cont2++;
            break;

        case(3):
            cont3++;
            break;

        case(4):
            cont4++;
            break;

        case(5):
            cont5++;
            break;

        case(6):
            cont6++;
            break;
        }
        }

printf("\nO numero de votos para o candidato 1 e: %d\n", cont1);
printf("\nO numero de votos para o candidato 2 e: %d\n", cont2);
printf("\nO numero de votos para o candidato 3 e: %d\n", cont3);
printf("\nO numero de votos para o candidato 4 e: %d\n", cont4);
printf("\nO numero de votos em voto nulo e: %d\n", cont5);
printf("\nO numero de votos em branco  e: %d\n", cont6);

}
