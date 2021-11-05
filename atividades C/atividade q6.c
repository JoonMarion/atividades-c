#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

//definindo variáveis
float lata = 350, garrafa1 = 600, garrafa2 = 2000, l = 0, g = 0, b = 0, resultado;

//nome
printf("     [   Quantidade em L de   ]\n");
printf("     [ refrigerante consumido ]\n\n");

//definindo valores
printf("Quantas latas de 350ml você consumiu?\n");
scanf("%f", &l);

printf("Quantas garrafas de 600ml você consumiu?\n");
scanf("%f", &g);

printf("Quantas garrafas de 2L você consumiu?\n");
scanf("%f", &b);

//calculando valor total e convertendo pra L
resultado = (lata * l + garrafa1 * g + garrafa2 * b) / 1000;

//mostrando resultado
printf("A quantidade total consumida de refrigerante em litros é: %.3fL\n\n", resultado);

system("pause");

}
