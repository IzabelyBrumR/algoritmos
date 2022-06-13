#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

float contador, idade, media, superior, soma;

    contador = 0;
    soma = 0;

    printf("Com quantas idades voce gostaria de realizar a media:\n");
    scanf("%f", &superior);

while(contador < superior){
    printf("Insira as idades:\n");
    scanf("%f", &idade);

    soma = soma + idade;

    contador ++;
}

media = soma/contador;
printf("A media das idades inseridas e: %.2f", media);

}
