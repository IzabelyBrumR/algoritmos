/*
    d) (Valor 2.0) O código de César é uma das mais simples e conhecidas técnicas de
    criptografia. É um tipo de substituição na qual cada letra do texto é substituída por
    outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por
    exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria
    ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de
    César (3 posições), entre com uma string e retorne a string codificada. Exemplo:
    String: a ligeira raposa marrom saltou sobre o cachorro cansado
    Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR
    FDQVDGR
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
    strupr(texto);

    //Percorre toda a String alterando todos os caracteres, exceto os espaços em branco
    for (int i = 0; i < strlen(texto); i++) {

        //Testa se o caracter na posição i não é um espaço em branco
        if (texto[i] != ' ') {

            //Se o caracter não for um espaço em branco, o caracter será substituido pelo caracter
            //que está 3 casas a frente, ou seja, A -> D, B -> E, C -> F, etc...
            //LEMBRANDO QUE texto[i] += 3 É O MESMO QUE texto[i] = texto[i] + 3;
            texto[i] += 3;

        }

    }

    //Imprime na Tela o texto modificado
    puts(texto);

}
