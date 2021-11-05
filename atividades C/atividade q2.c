#include <stdio.h>

float delta (int n1, int n2, int n3);
int main ()
{

	int a, b, c;
	float result;

	printf("digite o valor de a: ");
	scanf("%d", &a);
	printf("digite o valor de b: ");
	scanf("%d", &b);
	printf("digite o valor de c: ");
	scanf("%d", &c);
	result = delta(a, b, c);
	printf("o resultado é: %.2f", result);
return 0;
}

float delta (int n1, int n2, int n3)
{
	float resultado = (n2 * n2) - 4 * n1 * n3;
	return resultado;
}
