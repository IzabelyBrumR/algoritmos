/*
    b) (Valor 2.0) Fa�a um programa que preencha uma matriz de string com os modelos
    de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida,
    preencha um vetor com o consumo desses carros, isto �, quantos quil�metros cada
    um deles faz com um litro de combust�vel. Calcule e mostre:
    (a) O modelo de carro mais econ�mico;
    (b) Quantos litros de combust�vel cada um dos carros cadastrados consome para
    percorrer uma dist�ncia de 1.000 quil�metros.
*/

#include <stdio.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    /*
        Cria um vetor chamado consumos_litro para armazenar a quantidade de km para consumir 1 litro de gasolina por
        cada carro.
        A vari�vel economico auxilia a encontrar o carro com menor consumo de gasolina, ou seja, que anda mais
        km com 1 litro de gasolina.
        A vari�vel consome ser� utilizada no c�lculo do consumo em 1000 km
        Declara carros que � "um vetor de Strings"
        Declara a vari�vel posicao, que armazenar� a posi��o do carro mais econ�mico
    */
    char carros[5][20];
    float consumos_litro[5], economico = -999, consome;
    int posicao;

    //Solicita as informa��es sobre o modelo dos carros e o consumo dos mesmos
    for (int  i = 0; i < 5; i++) {

        fflush(stdin);
        printf("Informe um modelo de carro: ");
        gets(carros[i]);

        printf("Informe o consumo do carro: ");
        scanf("%f",&consumos_litro[i]);

    }

    //Busca o carro mais ec�nomico, percorrendo todo o vetor
    for (int  i = 0; i < 5; i++) {

        /*
            Verifica se o valor de consumo do carro � maior que o consumo armazenado na vari�vel
            economico, pois o carro mais econ�mico � o carro que anda mais km com 1 litro, ou seja,
            quanto maior o consumos_litro do carro for maior, mais econ�mico ser� o carro.
        */
        if( consumos_litro[i] > economico ){

            /*
                Caso o valor de consumo do carro � maior que o consumo armazenado na vari�vel
                economico, deve-se atualizar o valor da posi��o e o valor da vari�vel economico.
                A vari�vel economico ser� sempre substituida na primeira posi��o do vetor, pois
                economico come�a com um valor muito baixo.
            */
            posicao = i;
            economico = consumos_litro[i];

        }

    }

    //Imprime um as informa��es do carro mais econ�mico
    printf("O modelo do carro mais econ�mico � %s,",carros[posicao]);
    printf(" que possui o consume %.2f km/l.\n",consumos_litro[posicao]);

    //Percorre todos os carros e calcula o gasto em litros para a dist�ncia de 1000 km
    for (int  i = 0; i < 5; i++) {

        /*
            Calcula o gasto em litros para a dist�ncia de 1000 km, dividindo 1000 pelo consumo
            m�dio do carro
        */
        consome = 1000 / consumos_litro[i];

        //Imprime os resultados dos calculos
        printf("O modelo do carro %s ",carros[i]);
        printf("consume %.2f litros em 1000 km.\n",consome);

    }

}
