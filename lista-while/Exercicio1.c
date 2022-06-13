#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int num, contador, contador1;
contador = 0;
contador1 = 0;

while(contador <= 10){
    printf("\nEntre com um numero inteiro:");
    scanf("%d", &num);

    if((num >= 30) && (num <= 90)){
        contador1 ++;
    }
    contador ++;

    }
    printf("%d", contador1);
}


