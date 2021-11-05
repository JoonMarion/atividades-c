#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void f(int *v)
{
    v[5] = 20;
}

int main()
{
    int v[10], i;

    for(i = 0; i < 10; i++)
    {
        v[i] = i;
    }

    f(v);
    printf("%d\n", v[5]);

    return 0;
}
