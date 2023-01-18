#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

main(){

    float massa;
    int secs=0;
    int minutos=0;
    int horas=0;

    printf("Entre com a massa do objeto (em gramas):\n");
    scanf("%f",&massa);

    while(massa > 0.5){

    massa *= 0.5;

    secs += 50;

    if(secs >= 60){
        secs -= 60;
        minutos += 1;
    }

    if(minutos >= 60){
        minutos -= 60;
        horas += 1;
    }

    }


    printf("Levara %d horas, %d minutos e %d segundos para a massa atingir 0,5 gramas.",horas,minutos,secs);

}


