#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca(int *n)
{
    *n = 20;
}

int main()
{
    int n = 10;

    troca(&n);

    printf("%d\n", n);

    return 0;
}






