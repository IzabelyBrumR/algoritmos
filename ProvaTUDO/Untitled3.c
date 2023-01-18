#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

main(){

float massa,seg,minutos,horas,massaF, resto;
int cont = 50;


    printf("Entre com a massa\n");
    scanf("%f", &massa);

    do{
       massaF = massa / 2;
       cont + 50;

     if(massaF < 0.5 ){
        horas = cont / 3600;
        resto = seg % 3600;
        minutos = restos / 60;
        seg = resto % 60;

     }
    }while(massa <= 0.5);

printf("A massa inicial: %f\n", massa);
printf("A massa final: %f\n", massaF);
printf("O tempo que demorou em seg: %f  min: %f horas: %f",seg ,minutos ,horas );

}


