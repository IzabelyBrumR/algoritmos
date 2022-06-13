#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int cont = 1;

while(cont <= 15){

float c;
char n;

printf("Entre com o a inicial do seu nome:\n");
scanf("\n%c", &n);

printf("Entre com o valor de suas compras do ano passado:\n");
scanf("%f", &c);

if( c >= 1000){

    printf("Parabens voce possui 15 por cento de desconto\n");

}
else{

    printf("Parabens voce possui 10 por cento de desconto\n");

}

}
}
