#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float lado, area, area_base, area_lateral, volume, h, ladoB, ladoC;

printf("Entre com o valor do cateto do prisma:\n");
scanf("%f", &lado);

printf("Entre com o valor do segundo cateto do prisma:\n");
scanf("%f", &ladoB);

printf("Entre com o valor da hipotenusa do prisma:\n");
scanf("%f", &ladoC);

printf("Entre com o valor da altura do prisma:\n");
scanf("%f", &h);

    area_base = lado * ladoB / 2;
    area_lateral = (lado * h) + (ladoB * h) + (ladoC * h);
    area = (area_base * 2) + area_lateral;
    volume = area_base * h;

    printf("A área: %f\n", area);
    printf("A área da base: %f\n", area_base);
    printf("A área da lateral: %f\n", area_lateral);
    printf("O volume:%f\n", volume);

}
