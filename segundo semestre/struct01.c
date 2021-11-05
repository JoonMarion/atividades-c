#include <stdio.h>
#include <stdlib.h>

struct facil
{
    int num;
    char ch;
};

int main()
{
    struct facil fac1, fac2;

    fac1.num = 3;
    fac1.ch = 'c';

    printf("\n%d",  fac1.num);
    printf("\n%c",  fac1.ch);

    return 0;
}