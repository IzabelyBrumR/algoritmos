#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float r, area, perimetro, diametro, volume;

printf("Entre com o raio da esfera:\n");
scanf("%f", &r);

    area = pow(r, 2) * 12.56;
    perimetro = r * 6.28;
    diametro = 2 * r;
    volume = pow(r, 3) * (4/3 * 3.14);

    printf("A área: %f\n", area);
    printf("O perímetro: %f\n", perimetro);
    printf("O diâmetro: %f\n", diametro);
    printf("O volume: %f", volume);


}
