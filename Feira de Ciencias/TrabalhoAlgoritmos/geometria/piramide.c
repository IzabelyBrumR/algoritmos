#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float lado, area, area_base, area_lateral, volume, h;

printf("Entre com o lado da piramide quadrangular:\n");
scanf("%f", &lado);

printf("Entre com a altura da piramide quadrangular:\n");
scanf("%f", &h);

    area_base = lado + lado + lado + lado;
    area_lateral = ((lado * h) / 2) * 4;
    area = area_base + area_lateral;
    volume = area_base * h * 0.333;

    printf("A área: %f\n", area);
    printf("O área lateral: %f\n", area_lateral);
    printf("A área da base: %f\n", area_base);
    printf("O volume:%f\n", volume);

}
