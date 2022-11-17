/*
    c) (Valor 2.0) Uma agência espiã deseja enviar mensagens secretas para seus agentes.
    O código dessas mensagens é a substituição das vogais por números, sendo que as
    vogais AEIOU correspondem a 23456. Nesse código a frase “EU ESTOU NA AULA
    DE ICC” corresponde à frase: “36 3ST56 N2 26L2 DE 4CC“. Faça um programa em
    C que receba uma frase e a codifique-a. A frase deve possuir no máximo 60
    caracteres.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    //Declara a string
    char texto[60];

    //Solicita a String e tranforma em maiúscula todas as letras da String
    printf("Informe um texto: ");
    gets(texto);

    //Percorre toda a String e busca todas as vogais para substituir pelos números
    for (int i = 0; i < strlen(texto); i++) {

        //Verifica se a posição i da String possui uma das vogais e substitui pelo número
        if (texto[i] == 'a' || texto[i] == 'A') {

            //Lembrem-se de que o número deve estar entre aspas simples
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
