#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

//variáveis
float valor1 = 0, parcela;

//nome
printf("      [  Calcula o desconto de 10%%     ]\n");
printf("      [ e calcula o valor da parcela,  ]\n");
printf("      [ parcelado em até 3x sem juros. ]\n\n");

//Selecionar o valor recebido
printf("Digite o valor do produto:\n");
scanf("%f", &valor1);

//calcular 10%
valor1 = valor1 * 0.9;

//pagamento com desconto de 10%
printf("O total a pagar com desconto de 10%% é: R$%.2f", valor1);

//calcular parcela
parcela = valor1 / 3;

//parcela
printf("\nO valor da parcela de 3x sem juros é: R$%.2f\n\n", parcela);

system("pause");

}
