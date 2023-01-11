#include<conio.h>
#include<stdio.h>
#include<math.h>

main(){

float salario, tempo, bonus;

    printf("Entre com o seu salario\n");
    scanf("%f", &salario);

    printf("Entre com o seu tempo de serviço\n");
    scanf("%f", &tempo);

    if(tempo >= 5)
    {
        bonus = salario * 0.2;
    } else {
        bonus = salario * 0.1;
    }

printf("O valor do bonus recebido eh: %.2f", bonus);

}
