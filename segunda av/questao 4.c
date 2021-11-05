#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");

//variáveis voláteis
float a, b, c, d, e, resultado;

//variáveis fixas
float f = 0.05, g = 0.10, h = 0.25, i = 0.50, j = 1.00;

//nome
printf("Selecione a quantidade de cada moeda:\n\n");

//quantidade de moedas de cada valor
printf("Quantas moedas de 5 centavos?\n");
scanf("%f", &a);

printf("Quantas moedas de 10 centavos?\n");
scanf("%f", &b);

printf("Quantas moedas de 25 centavos?\n");
scanf("%f", &c);

printf("Quantas moedas de 50 centavos?\n");
scanf("%f", &d);

printf("Quantas moedas de 1 real?\n");
scanf("%f", &e);

//calculando poupança
resultado = (a * f) + (b * g) + (c * h) + (d * i) + (e * j);

//mostrando resultado
printf("\t[Você guardou R$%.2f]\n\n", resultado);

system("pause");
system("cls");
}

