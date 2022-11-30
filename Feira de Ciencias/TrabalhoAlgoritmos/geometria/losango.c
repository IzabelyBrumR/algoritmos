#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float lado, l2, l3, l4, area, perimetro;

printf("Entre com o lado 1 do losango:\n");
scanf("%f", &lado);
printf("Entre com o lado 2 do losango:\n");
scanf("%f", &l2);
printf("Entre com o lado 3 do losango:\n");
scanf("%f", &l3);
printf("Entre com o lado 4 do losango:\n");
scanf("%f", &l4);

    area = lado * lado;
    perimetro = lado + lado + lado + lado;

    printf("A área: %f\n", area);
    printf("O perímetro: %f\n", perimetro);

}
