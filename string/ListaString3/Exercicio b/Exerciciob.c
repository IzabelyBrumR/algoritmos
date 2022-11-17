/*
    b) (Valor 2.0) Faça um programa que preencha uma matriz de string com os modelos
    de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida,
    preencha um vetor com o consumo desses carros, isto é, quantos quilômetros cada
    um deles faz com um litro de combustível. Calcule e mostre:
    (a) O modelo de carro mais econômico;
    (b) Quantos litros de combustível cada um dos carros cadastrados consome para
    percorrer uma distância de 1.000 quilômetros.
*/

#include <stdio.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

int main() {

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    /*
        Cria um vetor chamado consumos_litro para armazenar a quantidade de km para consumir 1 litro de gasolina por
        cada carro.
        A variável economico auxilia a encontrar o carro com menor consumo de gasolina, ou seja, que anda mais
        km com 1 litro de gasolina.
        A variável consome será utilizada no cálculo do consumo em 1000 km
        Declara carros que é "um vetor de Strings"
        Declara a variável posicao, que armazenará a posição do carro mais econômico
    */
    char carros[5][20];
    float consumos_litro[5], economico = -999, consome;
    int posicao;

    //Solicita as informações sobre o modelo dos carros e o consumo dos mesmos
    for (int  i = 0; i < 5; i++) {

        fflush(stdin);
        printf("Informe um modelo de carro: ");
        gets(carros[i]);

        printf("Informe o consumo do carro: ");
        scanf("%f",&consumos_litro[i]);

    }

    //Busca o carro mais ecônomico, percorrendo todo o vetor
    for (int  i = 0; i < 5; i++) {

        /*
            Verifica se o valor de consumo do carro é maior que o consumo armazenado na variável
            economico, pois o carro mais econômico é o carro que anda mais km com 1 litro, ou seja,
            quanto maior o consumos_litro do carro for maior, mais econômico será o carro.
        */
        if( consumos_litro[i] > economico ){

            /*
                Caso o valor de consumo do carro é maior que o consumo armazenado na variável
                economico, deve-se atualizar o valor da posição e o valor da variável economico.
                A variável economico será sempre substituida na primeira posição do vetor, pois
                economico começa com um valor muito baixo.
            */
            posicao = i;
            economico = consumos_litro[i];

        }

    }

    //Imprime um as informações do carro mais econômico
    printf("O modelo do carro mais econômico é %s,",carros[posicao]);
    printf(" que possui o consume %.2f km/l.\n",consumos_litro[posicao]);

    //Percorre todos os carros e calcula o gasto em litros para a distância de 1000 km
    for (int  i = 0; i < 5; i++) {

        /*
            Calcula o gasto em litros para a distância de 1000 km, dividindo 1000 pelo consumo
            médio do carro
        */
        consome = 1000 / consumos_litro[i];

        //Imprime os resultados dos calculos
        printf("O modelo do carro %s ",carros[i]);
        printf("consume %.2f litros em 1000 km.\n",consome);

    }

}
