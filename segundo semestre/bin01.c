#include <stdio.h>
#include <stdlib.h>

//função com parâmetros
void pesquisaBinaria(int sort[], int procura, int tam)
{
    int inicio = 0;
    int fim = tam - 1;
    int meio = (inicio + fim) / 2;
    int cont = 0;

//laços para pesquisar se o valor se encontra no vetor
    while(procura != sort[meio] && inicio != fim)
    {
        if(procura > sort[meio])
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio;
        }
        meio = (inicio + fim) / 2;
        cont++;
    }

//mostrando resultados
    if(sort[meio] == procura)
    {
        printf("\n* Valor encontrado *\n");
        printf("\n>>> O numero de comparacoes eh: %d\n", cont);
    }
    else
    {
        printf("\n* Valor nao encontrado *\n");
        printf("\n>>> O numero de comparacoes eh: %d\n", cont);
    }
}

//recebe ponteiro do vetor, tamanho do vetor
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
			}
		}
		fim--;
	} while (continua != 0); 
}

//função principal
int main()
{
//definindo variáveis
    int i, sort[32] = {24, 1, 10, 20, 17, 23, 12, 19, 25, 14, 31, 16, 6, 7, 27, 4, 26, 29, 28, 3, 2, 13, 30, 22, 21, 18, 5, 15, 32, 9, 11, 8};
    int pesquisa;

//chamando função bubble sort para botar os números na ordem
    bubllesort(sort, 32);

    for (i = 0; i < 32; i++)
    {
        printf("\n%d", sort[i]);
    }

//pedindo pro usuário inserir o número para busca
    printf("\n\n>>> Selecione um numero inteiro para pesquisa dentro do vetor: ");
    scanf("%d", &pesquisa);

//chamando função com parâmetros
    pesquisaBinaria(sort, pesquisa, 32);

    return 0;
}