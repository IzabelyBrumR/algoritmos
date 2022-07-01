#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int maior=0, menor=9999999999999999, maior_a, menor_a, soma_veiculos=0, soma_acidente=0;
int cidade_maior_veiculos, cidade_menor_veiculos, cidade_menor_acidentes, cidade_maior_acidentes;
int cont = 0;

do{

    int codigo, veiculos, acidentes;
    char estado;

    // arthur câmera segatti é insuportável

    printf("Entre com o codigo da sua cidade:\n");
    scanf("%d", &codigo);

    printf("Entre com o numero de veiculos da sua cidade:\n");
    scanf("%d", &veiculos);

    printf("Entre com o numero de acidentes da sua cidade:\n");
    scanf("%d", &acidentes);

    if(veiculos > maior){
        maior = veiculos;
        cidade_maior_veiculos = codigo;
    }

    if(veiculos < menor){
        menor = veiculos;
        cidade_maior_veiculos = codigo;
    }

    if(acidentes > maior_a){
        maior_a = acidentes;
        cidade_maior_acidentes = codigo;
    }

    if(acidentes < menor_a){
        menor_a = acidentes;
        cidade_menor_acidentes = codigo;
    }

    soma_veiculos = soma_veiculos + veiculos;

    soma_acidente = soma_acidente + acidentes;

    cont ++;

}while(cont < 2);

printf("Media veiculos = %d\n", soma_veiculos / cont);
printf("Media acidentes = %d\n", soma_acidente / cont);
printf("Cidade com mais acidentes = %d com %d acidentes\n", cidade_maior_acidentes, maior_a);
printf("Cidade com menos acidentes = %d com %d acidentes\n", cidade_menor_acidentes, menor_a);
printf("Cidade com mais veiculos = %d com %d veiculos\n", cidade_maior_veiculos, maior);
printf("Cidade com menos veiculos = %d com %d veiculos\n", cidade_menor_veiculos, menor);

}
