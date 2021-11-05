#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "");
int a;
float pt = 0;

//tabela
printf("     [número]        [Planeta]        [Gravidade relativa]\n");
printf("         1            Mercúrio                 0,37\n");
printf("         2             Vênus                   0,88\n");
printf("         3             Marte                   0,38\n");
printf("         4            Júpiter                  2,64\n");
printf("         5            Saturno                  1,15\n");
printf("         6             Urano                   1,17\n\n");

printf("Para calcular seu peso em algum desses planetas, informe:\n\n");

printf("Qual número do planeta que você deseja calcular seu peso?\n");
scanf("%d", &a);

switch(a)

{
case 1:
printf("\nVocê selecionou Mercúrio!\n");
break;

case 2:
printf("\nVocê selecionou Vênus!\n");
break;

case 3:
printf("\nVocê selecionou Marte!\n");
break;

case 4:
printf("\nVocê selecionou Júpiter!\n");
break;

case 5:
printf("\nVocê selecionou Saturno!\n");
break;

case 6:
printf("\nVocê selecionou Urano!\n");
break;

default:
printf("\nComando inválido!\n\n\n");
break;

}

printf("\nQual o seu peso na Terra?\n");
scanf("%f", &pt);

if(a == 1)
{
printf("\nO seu peso em Mercúrio é: %.2f\n\n", (pt / 10) * 0.37);
}
else if(a == 2)
{
printf("\nO seu peso em Vênus é: %.2f\n\n", (pt / 10) * 0.88);
}
else if(a == 3)
{
printf("\nO seu peso em Marte é: %.2f\n\n", (pt / 10) * 0.38);
}
else if(a == 4)
{
printf("\nO seu peso em Júpiter é: %.2f\n\n", (pt / 10) * 2.64);
}
else if(a == 5)
{
printf("\nO seu peso em Saturno é: %.2f\n\n", (pt / 10) * 1.15);
}
else if(a == 6)
{
printf("\nO seu peso em Urano é: %.2f\n\n", (pt / 10) * 1,17);
}
else if(a < 1 || a > 6)
{
printf("Comando inválido!\n\n");
}
system("pause");
system("cls");

}
