#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definindo variáveis
    int *M, *N, tam;
    int i = 0, r = 0, x;

    //alocando memória
    M = (int *)malloc(tam * sizeof(int));
    N = (int *)malloc(tam * sizeof(int));

    //verificando alocação
    if (N == NULL || M == NULL)
    {
        printf("sem espaco na memoria");
    }
    else
    {
        //selecionar o tamanho dos vetores M e N
        printf("\n* Selecione o tamanho dos vetores M e N *\n>>> ");
        scanf("%d", &tam);
        printf("\n");

        //selecionando valores pros mesmos
        for (i = 1; i <= tam; i++)
        {
            printf("Selecione o valor %d do vetor M: ", i);
            scanf("%d", &M[i]);

            printf("Selecione o valor %d do vetor N: ", i);
            scanf("%d", &N[i]);
            printf("\n");
        }

        //laço de repetição (do - while)
        do
        {
            //comunicação com o usuário para o usuário
            printf("\nSelecione a opcao desejada: ");
            printf("\n1 - Mostrar o produto de M por N");
            printf("\n2 - Mostrar a soma de M com N");
            printf("\n3 - Mostrar a diferenca de M com N");
            printf("\n4 - Sair do programa\n");
            printf(">>> ");
            scanf("%d", &x);
            printf("\n");

            //alternativa com 'switch - case'
            switch (x)
            {

                //todas as contas realizdas dentro do 'printf'

            case 1:
                for (i = 1; i <= tam; i++)
                {
                    printf("O produto de M por N na posicao %d eh: %d\n", i, M[i] * N[i]);
                }
                printf("------------------------------------------\n");
                break;

            case 2:
                for (i = 1; i <= tam; i++)
                {
                    printf("A soma de M com N na posicao %d eh: %d\n", i, M[i] + N[i]);
                }
                printf("------------------------------------------");
                break;

            case 3:
                for (i = 1; i <= tam; i++)
                {
                    printf("A diferenca de M com N na posicao %d eh: %d\n", i, M[i] - N[i]);
                }
                printf("------------------------------------------");
                break;

            case 4:
                r = 1;
                break;
            }

        } while (r == 0);
        //liberando memória
        free(M);
        free(N);
    }

    //pausa
    system("pause");

    //retorno
    return 0;
}
