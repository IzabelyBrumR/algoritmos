#include <conio.h>
#include <stdio.h>

float hipotenusa(float a, float b)
{
    float h;
    h = (a * a) + (b * b);

    return(sqrt(h));
}

void main()
{
    float a, b;

    printf("Entre com o cateto oposto:\n");
    scanf("%f", &a);

    printf("Enter com o cateto adjacente:\n");
    scanf("%f", &b);

    printf("A hipotenusa eh: %f", hipotenusa(a,b));

}
