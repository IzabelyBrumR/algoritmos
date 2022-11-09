#include <conio.h>
#include <stdio.h>

int vogais(char str[25])
{
    int cont = 0;
    for(int i=0; i<25; i++)
    {
        if(
           str[i] == 'a' ||
           str[i] == 'A' ||
           str[i] == 'e' ||
           str[i] == 'E' ||
           str[i] == 'i' ||
           str[i] == 'I' ||
           str[i] == 'o' ||
           str[i] == 'O' ||
           str[i] == 'u' ||
           str[i] == 'U'
           )
            cont ++;

    }
    return cont;
}

void main()
{
    int x = 0;
    char str[25];
    printf("Entre com um nome:\n");
    gets(str);
    x += vogais(str);
    printf("A quantidade de vogais na string eh: %d", x);

}
