#include <stdio.h>
#include <locale.h>

float delta(float a, float b, float c)
{
    float resultado = (b * b) - (4 * a * c);
    return resultado;
}

void main()
{
    float a = 0.0, b = 0.0, c = 0.0;

    printf("Selecione o valor de a, b e c, respectivamente, para\ndescubrirmos o valor de delta:\n");

    scanf("%f %f %f", &a, &b, &c);

    printf("\nO resultado eh: %.2f\n\n", delta(a, b , c));

    system("pause");
}


