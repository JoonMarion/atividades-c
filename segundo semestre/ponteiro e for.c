#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int v[10], i;

    for(i = 0; i < 10; i++){
        v[i] = i;
    }


    for(i = 0; i < 10; i++){
        printf("%d\n", *(v + i));
    }

return 0;
}
