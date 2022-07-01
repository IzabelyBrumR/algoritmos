#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){

setlocale(LC_ALL, "Portuguese");

float numeros, numeros_p, numeros_n;

printf("Entre com números positivos e negativos, para finalizar 0\n");
scanf("%f", &numeros);

while(numeros != 0){

    if(numeros > 0){
       numeros_p = numeros_p + numeros;

    }
    if(numeros < 0){
        numeros_n = numeros_n + numeros;
    }

    printf("Entre com números positivos e negativos, para finalizar 0\n");
    scanf("%f", &numeros);


}

printf("Essa é a soma dos números positivos: %f\n", numeros_p);
printf("Essa é a soma dos números negativos: %f\n", numeros_n);
printf("Essa é a soma dos dois: %f + %f = %f", numeros_p,numeros_n, numeros_p + numeros_n);

}

