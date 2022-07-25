#include<stdio.h>
#include<math.h>

main(){

int macas;
float precom;

printf("Entre com o numeros de maças que voce quer comprar:\n");
scanf("%d", &macas);

if(macas>=12){
    precom = macas * 0.25;
}
if(macas<12){
    precom = macas * 0.30;
}

printf("O valor a ser pago pelas maças e: %f", precom);
}
