
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct carro
{
	char marca[25], cor[25];
	int ano;
	float preco;
};

int main()
{
	setlocale(LC_ALL, "");
	struct carro vetcarros[20];
	int i = 1, ano_consulta;
	float preco_consulta;
	char marca_consulta[20], cor_consulta[15];

	for (i = 1; i <= 20; i++)
	{
		printf("Informe a marca do carro %d: ", i);
		scanf("%s", &vetcarros[i].marca);

		printf("Informe o ano do carro: ");
		scanf("%d", &vetcarros[i].ano);

		printf("Informe a cor do carro: ");
		scanf("%s", &vetcarros[i].cor);

		printf("Informe o preco do carro: ");
		scanf("%f", &vetcarros[i].preco);

		printf("\n");
	}

	printf("\nInforme o pre�o do carro para consultar: ");
	scanf("%f", &preco_consulta);

	for (i = 1; i <= 20; i++)
	{
		if (vetcarros[i].preco <= preco_consulta)
		{
			printf("\nA marca do carro dispon�vel �: %s", vetcarros[i].marca);
			printf("\nA cor do carro dispon�vel �: %s", vetcarros[i].cor);
			printf("\nO ano do carro dispon�vel �: %d", vetcarros[i].ano);
			printf("\nO pre�o do carro dispon�vel �: R$%.2f", vetcarros[i].preco);
		}
	}

	printf("\n\nInforme a marca do carro para consultar: ");
	scanf("%s", &marca_consulta);

	for (i = 1; i <= 20; i++)
	{
		if (strcmp(marca_consulta, vetcarros[i].marca) == 0)
		{
			printf("\nO pre�o do carro dispon�vel �: R$%.2f", vetcarros[i].preco);
			printf("\nA cor do carro dispon�vel �: %s", vetcarros[i].cor);
			printf("\nO ano do carro dispon�vel �: %d", vetcarros[i].ano);
		}
	}

	printf("\n\nInforme a marca do carro para consultar: ");
	scanf("%s", &marca_consulta);
	printf("\nInforme o ano do carro para consultar: ");
	scanf("%d", &ano_consulta);
	printf("\nInforme a cor do carro para consultar: ");
	scanf("%s", &cor_consulta);

	for (i = 1; i <= 20; i++)
	{
		if (strcmp(cor_consulta, vetcarros[i].cor) == 0 && ano_consulta == vetcarros[i].ano && strcmp(marca_consulta, vetcarros[i].marca) == 0)
		{
			printf("\nO carro dispon�vel tem o pre�o de: R$%.2f", vetcarros[i].preco);
		}
		else
		{
			printf("\nN�o h� carros com as especifica��es informadas!");
		}
	}

	return 0;
}
