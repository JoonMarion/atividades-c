#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");

//variáveis
float rm = 0, imposto;

//calcular imposto de renda
printf("\n[Digite a renda mensal para o calculo do imposto:]\n");
scanf("%f", &rm);

//calculo do imposto
if(rm < 1164)
{printf("\n[O valor está isento de imposto de renda.]");}

else if(rm >= 1164 && rm <= 2326)
{printf("\n[O total a pagar de imposto é 15%%, portando: R$%.2f]", rm * 0.15);}

else if(rm > 2326)
{printf("\n[O total a pagar de imposto é 27,5%%, portando: R$%.2f]\n\n", rm * 0.275);}

system("pause");
system("cls");
}
