#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int idade, sexo, i_media, t_p_f, t_p_m, i, soma=0, n;
int contador = 0;
int contador2 = 0;

printf("Entre com o numero de repeticoes:\n");
scanf("%d", &n);

for(i=0; i<n; i++){

    printf("Entre com a sua idade:\n");
    scanf("%d", &idade);

    printf("Entre com o seu sexo 0 = masculino 1 = feminino\n");
    scanf("%d", &sexo);

    soma = soma + idade;

    if((sexo == 1) && (idade >= 30) && (idade <= 45)){
        contador++;
    }
    if(sexo == 0){
        contador2++;
    }
}
i_media = soma / n;

printf("a media das idades e: %d\n", i_media);
printf("O total de pessoas do sexo feminino com a idade entre 30 e 45: %d\n", contador);
printf("O total de pessoas do sexo masculino: %d\n", contador2);



}
