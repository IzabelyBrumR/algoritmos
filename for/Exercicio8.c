#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

float i, temp, celsius = 0;

    for(i=0; i<3; i++){

    printf("\nEntre com uma temperatura em fahrenheit para descobrir ela em celsius\n");
    scanf("%f", &temp);

    celsius = (temp - 32) * 5/9;

    printf("\nO resultado da temperatura em celsius e: %f\n", celsius);

}

printf("O resultado da temperatura em celsius e: %f", celsius);

}
