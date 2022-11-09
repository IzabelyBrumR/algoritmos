#include <stdio.h>
#include <conio.h>
#include <string.h>

int conta(char *nome, int *maiusculas, int *minusculas)
{
    int i, n, mai = 0, min = 0;

    n = strlen(nome);

    for(i=0; i<n; i++)
    {
        if(nome[i] >= 'a' && nome[i] <= 'z')
        {
            min++;
        }

        else if(nome[i] >= 'A' && nome[i] <= 'Z')
         {
             mai ++;
         }
    }
*maiusculas = mai;
*minusculas = min;
return(min + mai);
}

int main(void)
{
    char nome[256];
    int n, maiusculas, minusculas;
    printf("Nome:");
    gets(nome);

    n = conta(nome, &maiusculas, &minusculas);
    printf("Maiusculas: %d\n", maiusculas);
    printf("Minusculas: %d\n", minusculas);
    printf("O numero total de letras: %d\n", n);
    getch();
}

