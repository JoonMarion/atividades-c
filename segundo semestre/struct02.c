#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int cod;
    char nome[30]; 
    int level, vida, atq, def;
    int paralis;
}DadosMonstro; //associando "DadosMonstro" à definição da struct

int main()
{
    int i;
    DadosMonstro pikachu, chikorita; //não precisa de struct antes
    DadosMonstro monstros[3]; //array de struct

    printf("\nDigite o nome do monstro: ");
    scanf("%s", &pikachu.nome);
    printf("\nQual o level? ");
    scanf("%d", &pikachu.level);

    printf("\nO monstro %s tem level: %d", pikachu.nome, pikachu.level);

    for(i = 0; i < 3; i++)
    {
        printf("\n\nDigite o nome do monstro %d: ", i + 1);
        scanf("%s", monstros[i].nome);
        printf("Digite o level do monstro %s: ", monstros[i].nome);
        scanf("%d", &monstros[i].level);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nO monstro %s tem level: %d\n", monstros[i].nome, monstros[i].level);
    }
    
    return 0;
}