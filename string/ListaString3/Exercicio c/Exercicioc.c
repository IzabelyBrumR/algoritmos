/*
    c) (Valor 2.0) Uma ag�ncia espi� deseja enviar mensagens secretas para seus agentes.
    O c�digo dessas mensagens � a substitui��o das vogais por n�meros, sendo que as
    vogais AEIOU correspondem a 23456. Nesse c�digo a frase �EU ESTOU NA AULA
    DE ICC� corresponde � frase: �36 3ST56 N2 26L2 DE 4CC�. Fa�a um programa em
    C que receba uma frase e a codifique-a. A frase deve possuir no m�ximo 60
    caracteres.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    //Declara a string
    char texto[60];

    //Solicita a String e tranforma em mai�scula todas as letras da String
    printf("Informe um texto: ");
    gets(texto);

    //Percorre toda a String e busca todas as vogais para substituir pelos n�meros
    for (int i = 0; i < strlen(texto); i++) {

        //Verifica se a posi��o i da String possui uma das vogais e substitui pelo n�mero
        if (texto[i] == 'a' || texto[i] == 'A') {

            //Lembrem-se de que o n�mero deve estar entre aspas simples
            texto[i] = '2';

        } else if (texto[i] == 'e' || texto[i] == 'E') {

            texto[i] = '3';

        } else if (texto[i] == 'i' || texto[i] == 'I') {

            texto[i] = '4';

        } else if (texto[i] == 'o' || texto[i] == 'O') {

            texto[i] = '5';

        } else if (texto[i] == 'u' || texto[i] == 'U') {

            texto[i] = '6';

        }

    }

    //Imprime na Tela o texto modificado
    puts(texto);

}
