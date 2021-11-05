#include <stdio.h>
#include <stdlib.h>

int cont = 0;

//recebe ponteiro do vetor e tamanho do vetor
void bubllesort(int *v, int N)
{
	int i, continua, aux, fim = N;
	
	do
	{
		continua = 0;
		for (i = 0; i < fim - 1; i++)
		{
			if(v[i] > v[i + 1])
			{
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				continua = i;
                cont++;
			}
		}
		fim--;
	} while (continua != 0); 
}

//função principal
int main()
{
    int i, sort[5];

//inserindo valores
    for(i = 0; i < 5; i++)
    {
        printf("\n>>> Digite um %d numero: ", i + 1);
        scanf("%d", &sort[i]);
    }

//chamando a função bublle sort para ordenar os valores
    bubllesort(sort, 5);

    for (i = 0; i < 5; i++)
    {
        printf("\n%d", sort[i]);
    }

//número de comparações
    printf("\n\n>>> O numero de comparacoes eh: %d", cont);

    return 0;
}