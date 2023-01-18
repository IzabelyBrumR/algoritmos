#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota_prova1, nota_prova2, nota_prova3;
};

int main() {
    struct Aluno alunos[5];
    int i, maior_nota1 = 0, maior_media = 0, menor_media = 0;
    float media;


    for (i = 0; i < 5; i++) {
        printf("Entre com a matricula do aluno:\n");
        scanf("%d", &alunos[i].matricula);

        printf("Entre com o nome do aluno: ");
        scanf("%s", alunos[i].nome);

        printf("Entre com a nota da primeira prova:\n");
        scanf("%f", &alunos[i].nota_prova1);

        printf("Entre com a nota da segunda prova:\n");
        scanf("%f", &alunos[i].nota_prova2);

        printf("Entre com a nota da terceira prova:\n");
        scanf("%f", &alunos[i].nota_prova3);
    }

    // (b) Encontre o aluno com maior nota da primeira prova.
    for (i = 0; i < 5; i++) {
        if (alunos[i].nota_prova1 > alunos[maior_nota1].nota_prova1) {
            maior_nota1 = i;
        }
    }
        printf("Aluno com maior nota da primeira prova: %s\n", alunos[maior_nota1].nome);

    // (c) Encontre o aluno com maior média geral.
    for (i = 0; i < 5; i++) {
            media = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media > alunos[maior_media].nota_prova1) {
            maior_media = i;
        }
    }
        printf("Aluno com maior media geral: %s\n", alunos[maior_media].nome);

    // (d) Encontre o aluno com menor média geral.
    for (i = 0; i < 5; i++) {
            media = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media < alunos[menor_media].nota_prova1) {
            menor_media = i;
        }
    }
        printf("Aluno com menor media geral: %s\n", alunos[menor_media].nome);

    for (i = 0; i < 5; i++) {
            media = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media >= 6) {
            printf("Aluno %s foi aprovado\n", alunos[i].nome);
        } else {
            printf("Aluno %s foi reprovado\n", alunos[i].nome);
    }
}

return 0;
}
