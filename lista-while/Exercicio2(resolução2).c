#include <stdio.h>

main() {

    float i, count, soma, sup;

    count = 0;
    soma = 0;

    while(i != 0){
        printf("insira uma idade: ");
        scanf("%f", &i);

        soma = soma + i;

        count++;

    }

    float media = (soma) / (count- 1);



    printf("a media das idades e %f", media);

}
