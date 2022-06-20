#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    char sexo;
    int idade, cont, contador, maior, menor;
    float salario, media, somador;

    cont = 0;
    contador = 0;
    somador = 0;
    maior = 0;
    menor = 10000;

    do{

        printf("\n Digite m se o seu sexo for masculino e f para feminino\n");
        scanf("\n%c", &sexo);

        printf("\nDigite a idade\n");
        scanf("\n%d", &idade);

        printf("\nEntre com o salario:\n");
        scanf("\n%f", &salario);

        if(sexo =='f' && salario <= 100 ){
            cont++;
        }

        if(idade > maior){
            maior = idade;
        }
        if(idade < menor){
            menor = idade;
        }

        contador++;
        somador = somador + salario;

    }
    while(idade>0);

    media = somador/contador;

    printf("\n A media dos salarios e: %f \n", media);
    printf("\n A maior idade e %d e a menor %d \n", maior, menor);
    printf("%d e a quantidade de mulheres que recebem menos de 100 reais de salario \n", cont);

}
