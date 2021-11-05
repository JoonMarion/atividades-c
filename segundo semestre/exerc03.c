#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//variáveis
    int n, cont;

//ordem para o usuário
    printf("Selecione um número inteiro, positivo, par:\n");
    scanf("%d", &n);

//sair do programa caso for ímpar ou negativo
    if(n % 2 == 1 || n < 0)
       {printf("Valor inválido!\n\n");
        system("pause");}

//imprimindo todos números pares até o 0
    for(cont = n; n > 0; cont--)
       {n = n - 2;
        printf("%d\n", n);}

    system("pause");

}
