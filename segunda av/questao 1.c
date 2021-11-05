#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");

//definindo variáveis
float sf, vc, cf, tv, salario;

//Definindo salário fixo
printf("\tQual o salário fixo mensal do vendedor?\nR$");
scanf("%f", &sf);

//quantidade de carros vendidos
printf("\tQuantos carros o colaborador vendeu?\n-> ");
scanf("%f", &vc);

//comissão fixa
printf("\tQual a comissão fixa para cada carro vendido?\nR$");
scanf("%f", &cf);

//quanto vendeu
printf("\tQual o valor total de suas vendas?\nR$");
scanf("%f", &tv);

//salário
salario = sf + (vc * cf) + tv * 0.05;

//exibindo salário
printf("O salário mensal do vendedor é: R$%.2f\n\n", salario);

system("pause");
system("cls");
}







