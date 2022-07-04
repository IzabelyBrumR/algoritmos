#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, soma=0, media, num;

for( i=0; i<3; i++){

    printf("Entre com um numero\n");
    scanf("%d", &num);

    soma = soma + num;
}

media = soma /3;

printf("A soma dos numeros e: %d\n", soma);
printf("\nA media dos numeros e: %d", media);

}
