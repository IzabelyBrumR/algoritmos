#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float basem, basep, area, perimetro, h, lado1, lado2;

printf("Entre com a base maior do trap�zio:\n");
scanf("%f", &basem);

printf("Entre com a base menor do trap�zio:\n");
scanf("%f", &basep);

printf("Entre com a altura do trap�zio:\n");
scanf("%f", &h);

printf("Entre com o lado 1 do trap�zio:\n");
scanf("%f", &lado1);

printf("Entre com o lado 2  do trap�zio:\n");
scanf("%f", &lado2);

    area = (basem + basep) * h / 2;
    perimetro = basem + basep + lado1 + lado2;

    printf("A �rea: %f\n", area);
    printf("O per�metro: %f\n", perimetro);

}

