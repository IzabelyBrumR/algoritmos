#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int cod, i;
float p_custo, p_venda;

for(i=0; i<150; i++){

    printf("Entre com o codigo do produto:\n");
    scanf("%d", &cod);

    printf("Entre com o preco de custa dos produtos:\n");
    scanf("%f", &p_custo);

    p_venda= p_custo +(p_custo *0.2);
    printf("O preco de venda e: %f\n \n", p_venda);
}

}
