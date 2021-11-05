#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//variáveis
    float b, h, area;

//ordem para o usuário
    printf("Selecione a base e a altura, respectivamente, para calcular a área do triângulo:\n");

//inserindo valor da base
    scanf("%f", &b);

//condição valor nulo
    if(b == 0)
    {printf("\nValor inválido!\n");
     system("pause");}

//inserindo valor da altura
    scanf("%f", &h);

//condição valor nulo
    if(h == 0)
    {printf("\nValor inválido!\n");
     system("pause");}

//cálculo
     area = (b * h) / 2;

//resultado
     printf("\nA área do triângulo é: %.2f\n\n", area);

}
