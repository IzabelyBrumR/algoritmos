#include <conio.h>
#include <stdio.h>

int main()
{
int y, *p, x;

y = 0; // y � igual a 0;
p = &y; // p � igual ao endere�o de memoria de y;
x = *p; // x � igual ao ponteiro p;
x = 4; // x � igual a 4;

    (*p)++; // soma 1 no conteudo;

    x--; // menos 1;

    (*p) += x; // conteudo = conteudo + x;

    printf ("y = %d\n", y); // y = 4;

return(0);

}
