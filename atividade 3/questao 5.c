#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
setlocale(LC_ALL, "");

int matriz[5][5], i = 0, j = 0, MD = 0;

printf("Insira 36 valores para fazer a matriz: \n");

for(i = 0; i < 6; i++){
for(j = 0; j < 6; j++){
printf("[%d][%d] = ", i, j);
scanf("%d", &matriz[i][j]);
if(matriz[i][j] > 10){MD++;}
}}
printf("A matriz tem %d valor(es) maior que 10.", MD);
system("pause");
return (0);
}
