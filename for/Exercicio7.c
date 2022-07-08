#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

char nome;
float nota1, nota2, i, media_p, soma=0, media_t;

for(i=0; i<15; i++){

    printf("\nEntre com a inicial do seu nome:\n");
    scanf("\n%c", &nome);

    printf("Entre com a nota da sua primeira prova:\n");
    scanf("%f", &nota1);

    printf("Entre com a nota da sua segunda prova:\n");
    scanf("%f", &nota2);

    media_p = (nota1 + nota2) /2;

    soma += (nota1 + nota2);

    printf("\nO seu nome e:%c", nome);
    printf("\nA nota da sua primeira prova: %f", nota1);
    printf("\nA nota da sua segunda prova: %f", nota2);
    printf("\nA media apenas da sua nota: %f\n", media_p);
}

media_t = soma /30;

printf("\nA media de todos os alunos: %f\n", media_t);

}
