#include <conio.h>
#include <stdio.h>

int verifica(int n)
{
    if(n %2== 0)
    {
        return(1);
    }
    else{
        return(0);
    }
}

void main()
{
    int n;
    printf("Entre com um numero:\n");
    scanf("%d", &n);

    int resto = n / 2;

    if (verifica(n) == 0){
        printf("O numero eh impar\n");
    }
    else{
        printf("O numero eh par\n");
    }

    printf("O resto da divisao: %d\n", resto);

}
