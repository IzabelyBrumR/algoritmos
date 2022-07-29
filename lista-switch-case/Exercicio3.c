#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int saldo, operacao, deposito, saldof = 0, retirada;

printf("Entre com o valor da sua conta bancaria:\n");
scanf("%d", &saldo);

printf("Entre com 001 para fazer um deposito\n");
printf("Entre com 002 para fazer uma retirada\n");
scanf("%d", &operacao);

switch(operacao){

case 001:
    printf("Qual o valor do deposito?\n");
    scanf("%d", &deposito);
    saldof = saldo + deposito;
    printf("O seu saldo agora e: %d", saldof);
    break;

case 002:
    printf("Qual o valor da retirada?\n");
    scanf("%d", &retirada);
    saldof = saldo - retirada;
    printf("O seu saldo agora e: %d", saldof);
    break;
}

}
