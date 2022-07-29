#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int salario, cargo, salariof=0;

printf("Entre com o valor do seu salario:\n");
scanf("%d", &salario);

printf("Entre com 001 para o cargo de tecnico\n");
printf("Entre com 002 para o cargo de gerente\n");
printf("Entre com 003 para os outros cargos\n");
scanf("%d", &cargo);

switch(cargo){

case 001:
    salariof = salario + (0.5 * salario);
    printf("seu salario atual e: %d", salariof);
    break;

case 002:
    salariof = salario + (0.3 * salario);
    printf("seu salario atual e: %d", salariof);
    break;

case 003:
    salariof = salario + (0.2 * salario);
    printf("seu salario atual e: %d", salariof);
    break;
}



}
