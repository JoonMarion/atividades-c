#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");

float pl;
int p;

//tabela
printf("[Código de origem]  [Procedência]  [%%Imposto]\n");
printf("         1               Sul           11%%\n");
printf("         2              Norte          13%%\n");
printf("         3             Nordeste         9%%\n");
printf("         4           Centro-Oeste      12%%\n");

//preço do produto
printf("\nQual o valor do produto?\n");
scanf("%f", &pl);

//procedência
printf("Informe a procedência do produto de acordo com a tabela:\n");
scanf("%d", &p);

switch(p)
{
case 1:
printf("\nO preço final do produto é: R$%.2f.\n\n", pl * 1.11);
break;

case 2:
printf("\nO preço final do produto é: R$%.2f.\n\n", pl * 1.13);
break;

case 3:
printf("\nO preço final do produto é: R$%.2f.\n\n", pl * 1.09);
break;

case 4:
printf("\nO preço final do produto é: R$%.2f.\n\n", pl * 1.12);
break;

default:
printf("\nOpção inválida!\n\n");
break;
}

system("pause");
system("cls");
}
