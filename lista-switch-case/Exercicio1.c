#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int ferramentas;

printf("Entre com 001 para parafuso\n");
printf("Entre com 002 para porca\n");
printf("Entre com 003 para prego\n");
printf("Entre com 004 para martelo\n");
printf("Entre com 005 para tomada\n");
scanf("%d", &ferramentas);

switch(ferramentas){

case 001:
    printf("O parafuso custa R$0,15");
    break;

case 002:
    printf("A porca custa R$0,05");
    break;

case 003:
    printf("O prego custa R$0,10");
    break;

case 004:
    printf("O martelo custa R$40,00");
    break;

case 005:
    printf("A tomada custa R$3,00");
    break;
}
}
