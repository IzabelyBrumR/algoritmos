#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float ladoA, ladoB, area, perimetro, h;

printf("Entre com o lado A do paralelogramo:\n");
scanf("%f", &ladoA);

printf("Entre com o lado B do paralelogramo:\n");
scanf("%f", &ladoB);

printf("Entre com a altura do trapézio:\n");
scanf("%f", &h);

    area = ladoB * h;
    perimetro = (ladoA + ladoB) * 2;

    printf("A área: %f\n", area);
    printf("O perímetro: %f\n", perimetro);

}
