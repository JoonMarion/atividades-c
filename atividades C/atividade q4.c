#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

//definindo variáveis
float pao = 0.25, broa = 1.50, resultado;
int p = 0, b = 0;

//nome
printf("           [ RENDA  DIÁRIA  DA ]\n");
printf("           [  PADARIA HOTPÃO   ]\n");
printf("           [-------------------]\n");
printf("           [ ECONOMIA/POUPANÇA ]\n\n");

//qual a venda de hoje?
printf("Quantos pães a padaria Hotpão vendeu hoje?\n");
scanf("%d", &p);
printf("E quantas broas?\n");
scanf("%d", &b);

//calculo da renda diária
resultado = pao * p + broa * b;

//mostrando o total
printf("\nO total arrecadado no dia foi de: R$%.2f\n", resultado);

//calculando a poupança
resultado = resultado * 0.1;

//mostrando a poupança
printf("O valor destinado a poupança é de: R$%.2f\n\n", resultado);

system("pause");

}

