#include <stdio.h>

int main()
{
    int i, j, m[3][3];

//criando matriz
    for(i = 0; i < 3; i++)
    {

        printf("\n");

        for(j = 0; j < 3; j++)
        {
            printf("Elemento: [%d][%d] ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

//prinando a primeira matriz
    printf("\n** MATRIZ GERADA **\n");

    for(i = 0; i < 3; i++)
    {

        printf("\n");

        for(j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
    }

//realizando operação com a matriz
     printf("\n\n** RESULTADO DA MATRIZ MULTIPLCADO POR 5 **\n");

        for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            m[i][j] = m[i][j] * 5;
        }
    }

//printando a nova matriz
        for(i = 0; i < 3; i++)
    {

        printf("\n");

        for(j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
    }

    return 0;
}