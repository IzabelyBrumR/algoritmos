#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    char nome;
    float nota1, nota2, media;
    int contador;
    contador = 0;

    do{

        printf("\nEntre com a inicial do seu nome:\n");
        scanf("\n%c", &nome);

        printf("\nEntre com a sua nota A e a B:\n");
        scanf("%f %f", &nota1, &nota2);

        media = (nota1 + nota2) /2;

        printf("Sua media e: %f", media);

        contador++;

    }

    while(contador < 5);

}
