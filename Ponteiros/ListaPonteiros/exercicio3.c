#include <conio.h>
#include <stdio.h>

int main()
{
int y, *p, x;

y = 0; // y é igual a 0;
p = &y; // p é igual ao endereço de memoria de y;
x = *p; // x é igual ao ponteiro p;
x = 4; // x é igual a 4;

    (*p)++; // soma 1 no conteudo;

    x--; // menos 1;

    (*p) += x; // conteudo = conteudo + x;

    printf ("y = %d\n", y); // y = 4;

return(0);

}
