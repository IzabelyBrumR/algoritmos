#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

char n;
float salario_b, valor_a, i, valor_a1;

for(i=0; i<10; i++){

    printf("\nEntre com a inicial do seu nome:\n");
    scanf("\n%c", &n);

    printf("Entre com o seu salario bruto:\n");
    scanf("%f", &salario_b);

    if(salario_b < 600){
        printf("%c esta isento de pagar imposto:\n", n);
    }

    if((salario_b >= 600)&& (salario_b < 1500)){

        valor_a = salario_b +(salario_b*0.1);

    printf("%c tera de pagar %f", n, valor_a);
    }

    if(salario_b >= 1500){

        valor_a1 = salario_b +(salario_b*0.15);

    printf("%c tera de pagar %f", n, valor_a1);
    }

}

}
