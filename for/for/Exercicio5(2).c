#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){

char nome, sexo, i;
int idade;

    for(i=0; i<3; i++){

        printf("Entre com a inicial do seu nome:\n");
        scanf("\n%c", &nome);

        printf("Entre com a sua idade:\n");
        scanf("%d", &idade);

        printf("Entre com o seu sexo: m = masculino e f = feminino\n");
        scanf("\n%c", &sexo);

        if(sexo == 'm' && idade > 21){
            printf("O seu nome e: %c\n", nome);
        }
    }


}
