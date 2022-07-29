#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

int ano;

printf("Entre com 1 para o ano de 1982\n");
printf("Entre com 2 para o ano de 1986\n");
printf("Entre com 3 para o ano de 1990\n");
printf("Entre com 4 para o ano de 1994\n");
printf("Entre com 5 para o ano de 1998\n");
printf("Entre com 6 para o ano de 2002\n");
printf("Entre com 7 para o ano de 2006\n");
printf("Entre com 8 para o ano de 2010\n");
printf("Entre com 9 para o ano de 2014\n");
scanf("%d", &ano);

switch(ano){

case 1:
    printf("Local: Espanha /n Campeao: Italia-1982");
    break;

case 2:
    printf("Local: Mexico /n Campeao: Argentina-1986");
    break;

case 3:
    printf("Local: Italia /n Campeao: Alemanha-1990");
    break;

case 4:
    printf("Local: EUA /n Campeao: Brasil-1994");
    break;

case 5:
    printf("Local: Franca /n Campeao: Franca-1998");
    break;

case 6:
    printf("Local: Coreia e Japao /n Campeao: Brasil-2002");
    break;

case 7:
    printf("Local: Alemanha /n Campeao: Italia-2006");
    break;

case 8:
    printf("Local: Africa do Sul /n Campeao: Espanha-2010");
    break;

case 9:
    printf("Local: Brasil /n Campeao: Alemanha-2014");
    break;
    }
}
