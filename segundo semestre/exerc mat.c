#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j, LIN, COL, sd;
    int **m;

//comunicação com o usuário
    printf("\nSelecione o numero de linhas: ");
    scanf("%d", &LIN);
    printf("\nSelecione o numero de colunas: ");
    scanf("%d", &COL);

//alocando memória para o ponteiro de ponteiro
    m = (int **)malloc(LIN * sizeof(int));

//alocando memória para o vetor de ponteiros
    for(i = 0; i < LIN; i++)
    {
        m[i] = (int *)malloc(COL * sizeof(int));
    }

//testando se alocou memória corretamente
    if(m == NULL)
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
           printf("Elemento[%d][%d]: ", i, j);
           scanf("%d", &m[i][j]);
           
           if(i == j)
            {
               sd = sd + m[i][j];
            }
        }
    }

//imprimindo matriz
    for(i = 0; i < LIN; i++)
    {

        printf("\n");

        for(j = 0; j < COL; j++)
        {
            printf(" %3d ", m[i][j]);
        }
    }
//resultado da soma das diagonais
    printf("\n\nA soma dos elementos da diagonal principal eh: %d\n\n", sd);

//liberando memória
    for(i = 0; i < LIN; i++)
    {
        free(m[i]);
    }
    free(m);
    }  

    return 0; 
}
