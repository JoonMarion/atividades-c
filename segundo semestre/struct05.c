#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função struct
struct BES
{
    int matricula;
    char nome[20];
    float nota1, nota2;
};

struct BES aluno[3];
float mm = 0.0, mn1 = 0.0, mn2 = 0.0; //variáveis globais
char maiorNota1[20], maiorNota2[20], maiorMedia[20];
int i = 0;

void primeiraAvaliacao()
{
        for(i = 0; i < 3; i++)  //testando qual a maior nota da primeira avaliação
    {
        if(aluno[i].nota1 > mn1)
        {
            mn1 = aluno[i].nota1;
            strcpy(maiorNota1, aluno[i].nome);
        }
    }
    printf("\nO aluno com a maior nota na primeira avaliacao eh: %s\n", maiorNota1);

}

void segundaAvaliacao()
{
        for(i = 0; i < 3; i++)  //testando qual a maior nota da segunda avaliação
    {
        if(aluno[i].nota2 > mn2)
        {
            mn2 = aluno[i].nota2;
            strcpy(maiorNota2, aluno[i].nome);
        }
    }
    printf("\nO aluno com a maior nota na segunda avaliacao eh: %s\n", maiorNota2);
}

void MaiorMedia()
{
        float media[i];

        for(i = 0; i < 3; i++)  //calculando as médias
    {
        media[i] = (aluno[i].nota1 + aluno[i].nota2) / 2;

        if(media[i] > mm)
        {
            mm = media[i];
            strcpy(maiorMedia, aluno[i].nome);
        }
    }
    printf("\nO aluno com a maior media eh: %s\n", maiorMedia);
}

int main()  //função principal
{
    int x = 0, r = 0;  //defindo variáveis da main

    for(i = 0; i < 3; i++)  //comunicação com o usuário e inserção de valores
    {
        printf("\nInsira o numero da matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].matricula);
        printf("Insira o nome do aluno %d: ", i + 1);
        scanf("%s", aluno[i].nome);
        printf("Insira a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &aluno[i].nota1);
        printf("Insira a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &aluno[i].nota2);
    }

do{  //laço de repetição (do - while)

    printf("\n** Selecione a opcao desejada **\n");  //alternativas para o usuário
    printf("\n1 - Nome do aluno com a maior nota da 1 av.");
    printf("\n2 - Nome do aluno com a maior nota da 2 av.");
    printf("\n3 - Nome do aluno com a maior media geral");
    printf("\n4 - sair\n");

    scanf("%d", &x);

    switch(x)  //alternativa com switch / case
    {
        case 1:
        primeiraAvaliacao();
        break;

        case 2:
        segundaAvaliacao();
        break;

        case 3:
        MaiorMedia();
        break;

        case 4:
        r = 1;
        break;

        default:
        printf("\nOpcao invalida!");
        break;
    }

 }while(r == 0);

    return 0;
}
