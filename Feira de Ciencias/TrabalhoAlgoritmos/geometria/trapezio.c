#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float basem, basep, area, perimetro, h, lado1, lado2;

printf("Entre com a base maior do trapézio:\n");
scanf("%f", &basem);

printf("Entre com a base menor do trapézio:\n");
scanf("%f", &basep);

printf("Entre com a altura do trapézio:\n");
scanf("%f", &h);

printf("Entre com o lado 1 do trapézio:\n");
scanf("%f", &lado1);

printf("Entre com o lado 2  do trapézio:\n");
scanf("%f", &lado2);

    area = (basem + basep) * h / 2;
    perimetro = basem + basep + lado1 + lado2;

    printf("A área: %f\n", area);
    printf("O perímetro: %f\n", perimetro);

}

