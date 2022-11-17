/*
    d) (Valor 2.0) O c�digo de C�sar � uma das mais simples e conhecidas t�cnicas de
    criptografia. � um tipo de substitui��o na qual cada letra do texto � substitu�da por
    outra, que se apresenta no alfabeto abaixo dela um n�mero fixo de vezes. Por
    exemplo, com uma troca de tr�s posi��es, �A� seria substitu�do por �D�, �B� se tornaria
    �E�, e assim por diante. Implemente um programa que fa�a uso desse C�digo de
    C�sar (3 posi��es), entre com uma string e retorne a string codificada. Exemplo:
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

    //Solicita a String e tranforma em mai�scula todas as letras da String
    printf("Informe um texto: ");
    gets(texto);
    strupr(texto);

    //Percorre toda a String alterando todos os caracteres, exceto os espa�os em branco
    for (int i = 0; i < strlen(texto); i++) {

        //Testa se o caracter na posi��o i n�o � um espa�o em branco
        if (texto[i] != ' ') {

            //Se o caracter n�o for um espa�o em branco, o caracter ser� substituido pelo caracter
            //que est� 3 casas a frente, ou seja, A -> D, B -> E, C -> F, etc...
            //LEMBRANDO QUE texto[i] += 3 � O MESMO QUE texto[i] = texto[i] + 3;
            texto[i] += 3;

        }

    }

    //Imprime na Tela o texto modificado
    puts(texto);

}
