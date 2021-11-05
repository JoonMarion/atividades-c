#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

//definindo variáveis
float v = 12, k = 0, resultado;

//saudações
printf("     [  Seja bem-vindo ao   ]\n");
printf("     [restaurante Bem-Bão!!!]\n\n");

//cardápio
printf("      >>> R$12,00 por kg <<<\n\n");

//inserção do valor
printf("Qual o peso do prato em quilogramas?\n");
scanf("%f", &k);

//preço
resultado = v * k;

//aparecendo valor na tela
printf("O valor do seu prato é: R$%.2f\n\n", resultado);

system("pause");

}
