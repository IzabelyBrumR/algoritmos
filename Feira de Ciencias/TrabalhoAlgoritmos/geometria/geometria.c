#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float r, area, perimetro, diametro;

printf("Entre com o raio do circulo:\n");
scanf("%f", &r);

    area = pow(r, 2) * 3.14;
    perimetro = r * 6.28;
    diametro = 2 * r;

    printf("A �rea: %f\n", area);
    printf("O per�metro: %f\n", perimetro);
    printf("O di�metro: %f\n", diametro);


}
