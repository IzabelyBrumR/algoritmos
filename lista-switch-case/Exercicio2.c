#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int operacoes, valorA, valorB, soma=0, divisao=0, subtracao=0, multiplicacao=0;

printf("Entre com 001 para fazer uma adicao\n");
printf("Entre com 002 para fazer uma divisao\n");
printf("Entre com 003 para fazer uma subtracao\n");
printf("Entre com 004 para fazer uma multiplicacao\n");
scanf("%d", &operacoes);

printf("Entre com o valor A para fazer o calculo que escolheu:\n");
scanf("%d", &valorA);

printf("Entre com o valor B para fazer o calculo que escolheu:\n");
scanf("%d", &valorB);

switch(operacoes){

case 001:
    soma = valorA + valorB;
    printf(" A soma dos valores e: %d", soma);
    break;

case 002:
    divisao = valorA / valorB;
    printf(" A divisão dos valores e: %d", divisao);
    break;

case 003:
    subtracao = valorA - valorB;
    printf(" A subtracao dos valores e: %d", subtracao);
    break;

case 004:
    multiplicacao = valorA * valorB;
    printf(" A multiplicacao dos valores e: %d", multiplicacao);
    break;
}


}
