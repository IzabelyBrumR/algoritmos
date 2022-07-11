#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

    float nota, i, maior = 0, menor = 100000000000000000;

    for(i=0; i<3; i++){
        printf("\nEntre com a nota do aluno:\n");
        scanf("%f", &nota);

        if(nota > maior){
            maior = nota;
        }
    }
printf("A maior nota e: %f", maior);



}
