#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

float num, soma = 0, cont = 0, i;

for(i=0; i<3; i++){

    printf("Entre com um numero:\n");
    scanf("\n%f", &num);

    if(num < 0){
        cont++;
    }
    if(num > 0){
        soma = soma + num;
    }
}

printf("\nA soma dos numeros positivos e: %.2f\n", soma);
printf("\nO total de numeros negativos e: %.2f\n", cont);

}
