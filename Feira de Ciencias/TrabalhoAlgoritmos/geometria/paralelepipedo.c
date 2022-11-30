#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float lado, area, area_base, volume, h, ladoB;

printf("Entre com o valor A do paralelepípedo:\n");
scanf("%f", &lado);

printf("Entre com o valor B do paralelepípedo:\n");
scanf("%f", &ladoB);

printf("Entre com o valor C/ altura do paralelepípedo:\n");
scanf("%f", &h);

    area_base = lado * ladoB;
    area = (lado * ladoB + ladoB * h + lado * h) * 2;
    volume = area_base * h;

    printf("A área: %f\n", area);
    printf("A área da base: %f\n", area_base);
    printf("O volume:%f\n", volume);

}
