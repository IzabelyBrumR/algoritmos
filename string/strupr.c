#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


// strupr = transforma a string de minuscula para maiuscula
// strlwr = transforma a string em minuscula
// toupper = recebe um caracter e transforma em maiusculo
// tolower = recebe um caracter e transforma em minusculo

//   STRUPR

main(){

    char str[100];
    printf("Entre com uma string:\n");
    gets(str);

    strupr(str);
    printf("\nA string resultante eh: %s", str);
}
