#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){

float salario, tempo, bonus;

    printf("Entre com o seu salario\n");
    scanf("%f", &salario);

    printf("Entre com o tempo de servico\n");
    scanf("%f", &tempo);

    if(tempo >= 5){

        bonus = salario * 0.2;
    } else{
        bonus = salario * 0.1;
    }

printf("O valor do seu bonus eh %2.f\n", bonus);
printf("O seu salario com o bonus fica: %2.f\n", salario+bonus);
}
