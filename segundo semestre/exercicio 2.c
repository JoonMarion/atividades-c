#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
//acento
    setlocale(LC_ALL, "");

//variáveis
    float c, f;

//comunicação com o usuário
    printf("Insira no programa uma temperatura em graus Celsius,\npara tranformarmos em graus Fahrenheit:\n");
    scanf("%f", &c);

//conversão
    f = c * (9.0 / 5.0) + 32.0;

//resultado

    printf("%.2f graus celsius é o mesmo que %.2f graus Fahrenheit\n\n", c, f);

    system("PAUSE");

}
