#include <stdio.h>
#include <conio.h>

    struct dados{

        float quantia;
        char nome[30];
        char snome[30];

    }reg;

main(){

    printf("Digite o nome e um dos sobrenomes do doador:\n");
    printf("Separados por um espaço\n");
    scanf("%s%s", reg.nome, reg.snome);

    printf("Entre com a quantia doada em ml:\n");
    scanf("%f", &reg.quantia);

    printf("O doador %s %s doou %2.f ml de sangue", reg.nome, reg.snome, reg.quantia);
    getch();

}
