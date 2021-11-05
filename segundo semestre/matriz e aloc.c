#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 5

int main()
{
    int i, j, aux = 0;
    int **p;

//alocando memória para o ponteiro de ponteiro
    p = (int **)malloc(LIN * sizeof(int));

//alocando memória para o vetor de ponteiros
    for(i = 0; i < LIN; i++)
    {
        p[i] = (int *)malloc(COL * sizeof(int));
    }

//testando se alocou memória corretamente
    if(p == NULL)
    {
        printf("memoria insuficiente\n");
    }
    else
    {

//criando matriz
    for(i = 0; i < LIN; i++)
    {

        printf("\n");

        for(j = 0; j < COL; j++)
        {
            p[i][j] = aux;
            aux = aux + 2;
        }
    }

//imprimindo matriz
    for(i = 0; i < LIN; i++)
    {

        printf("\n");

        for(j = 0; j < COL; j++)
        {
            printf(" %3d ", p[i][j]);
        }
    }
    
//liberando memória
    for(i = 0; i < LIN; i++)
    {
        free(p[i]);
    }
    free(p);
    }
    return 0;
}
