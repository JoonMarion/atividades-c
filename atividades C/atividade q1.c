#include <stdio.h>
#include <locale.h>
#include <string.h>
void main()
{
setlocale(LC_ALL, "");

//Definindo vari�veis
float minuto = 0, km = 0, resultado;
char nome [52];

//Nome do piloto
printf("1 - Qual o nome do piloto?\n");
scanf("%[^\n]s", &nome);

//Dist�ncia
printf("2 - Qual a dist�ncia percorrida por %s em quil�metro?\n", nome);
scanf("%f", &km);

//Tempo
printf("3 - Qual o tempo gasto por %s em minutos?\n", nome);
scanf("%f", &minuto);

//converter
minuto = minuto / 60;

//Velocidade m�dia (resultado)
resultado = km / minuto;
printf("\n[A velocidade m�dia de %s foi de %.2fkm/h]\n", nome, resultado);

printf("\n");
system("pause");
}
