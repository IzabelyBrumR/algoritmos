#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int numeros(int x)
{
    x = rand()% 1001;
    return x;
}
void main()
{
    srand(time(NULL));
    int x;

    for(int i=0; i<10; i++){
        x = numeros(x);
        printf("%d\n", x);
    }
}
