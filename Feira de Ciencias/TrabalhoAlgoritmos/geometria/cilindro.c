#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float r, area, area_lateral, area_base, volume, h;

printf("Entre com o raio do cilindro:\n");
scanf("%f", &r);

printf("Entre com a altura do cilindro:\n");
scanf("%f", &h);

    area_lateral = r * h * 6.28;
    area_base = (r * r) * 3.14;
    area = area_lateral + (area_base * 2);
    volume = (r * r) * h * 3.14;

    printf("A �rea: %f\n", area);
    printf("A �rea lateral: %f\n", area_lateral);
    printf("A �rea da base: %f\n", area_base);
    printf("O volume: %f", volume);


}
