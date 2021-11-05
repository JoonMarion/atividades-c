#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//variáveis
    int a, aq;
    float ra;

//ordem para o usuário
    printf("Selecione um número inteiro:\n");
    scanf("%d", &a);

//sair do programa caso for ímpar
    if(a % 2 == 1)
       {printf("%d é ímpar\n\n", a);
        system("pause");}

//executar caso for par
    else
       {aq = a * a;
        ra = sqrt(a);}

//resultado
    printf("\n%d ao quadrado é: %d\n", a, aq);
    printf("\nA raiz de %d é: %.2f\n\n", a, ra);

    system("pause");
}
