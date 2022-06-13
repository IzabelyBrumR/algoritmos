#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

float cont = 1;
float idoso = 0, jovem = 0, soma = 0, media, pc, leve = 0;

while(cont <= 2){

    float idade, peso, altura;

    printf("Insira sua idade:\n");
    scanf("%f", &idade);

    printf("Insira sua altura:\n");
    scanf("%f", &altura);

    printf("Insira seu peso:\n");
    scanf("%f", &peso);

    if(idade > 50){
        idoso++;
    }
    if(idade > 10 && idade < 20){
        jovem++;
        soma = soma + altura;
    }
    if(peso < 40){
        leve++;
    }
    cont++;
}

media = soma / jovem;
pc = (leve * 100) / (cont + 1);

printf("numero de pessoas com mais de 50: %f \n", idoso);
printf("media das alturas de pessoa entre 10 e 20: %f \n", media);
printf("porcentagem de pessoas com menos de 40kg: %f \n", pc);


}
