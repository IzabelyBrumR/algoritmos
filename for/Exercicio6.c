#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, n, soma=0;
float salario, media;

printf("Entre com o numero de funcionarios que deseja saber a media dos salarios:\n");
scanf("%d", &n);

for(i=0; i<n; i++){

    printf("Entre com o salario:\n");
    scanf("%f", &salario);

    soma = soma + salario;
}

media = soma / n;

printf("A media dos salarios e:%f", media);

}
