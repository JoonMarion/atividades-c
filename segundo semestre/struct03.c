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

int main() //função principal
{
    struct BES aluno[3];  //defindo variáveis
    int i, x;
    char maiorNota1[20], maiorNota2[20], maiorMedia[20];
    float media[i];
    float mm = 0.0, mn1 = 0.0, mn2 = 0.0;
    
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

    for(i = 0; i < 3; i++)  //testando qual a maior nota da primeira avaliação
    {
        if(aluno[i].nota1 > mn1)
        {
            strcpy(maiorNota1, aluno[i].nome);
        }
    }

    for(i = 0; i < 3; i++)  //testando qual a maior nota da segunda avaliação
    {
        if(aluno[i].nota2 > mn2)
        {
            strcpy(maiorNota2, aluno[i].nome);
        }
    }

    for(i = 0; i < 3; i++)  //calculando as médias
    {
        media[i] = (aluno[i].nota1 + aluno[i].nota2) / 2;
        
        if(media[i] > mm)
        {
            mm = media[i];
            strcpy(maiorMedia, aluno[i].nome);
        }
    }

    printf("\n** Selecione a alternativa desejada **\n");  //alternativas para o usuário
    printf("\n1 - Nome do aluno com a maior nota da 1 av.");
    printf("\n2 - Nome do aluno com a maior nota da 2 av.");
    printf("\n3 - Nome do aluno com a maior media geral\n");
    scanf("%d", &x);
    
    switch(x)
    {
        case 1:
        printf("\nO aluno com a maior nota na primeira avaliacao eh: %s", maiorNota1);
        break;

        case 2:
        printf("\nO aluno com a maior nota na segunda avaliacao eh: %s", maiorNota2);
        break;

        case 3:
        printf("\nO aluno com a maior media eh: %s", maiorMedia);
        break;

        default:
        break;
    }

    return 0;

}
