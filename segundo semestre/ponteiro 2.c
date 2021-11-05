#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

//criação da variável n e criação do ponteiro

    int a, *pa;
    double b, *pb;
    char c, *pc;

//atribuição ponteiros

    pa = &a;
    pb = &b;
    pc = &c;

//atribuindo valores

    a = 1;
    b = 2.34;
    c = '@';

    printf("\nValores: %d %.2f %c", a, b, c);
    printf("\nPonteiros: %d %.2f %c", *pa, *pb, *pc);
    printf("\nEndereços: %p %p %p", pa, pb, pc);

//mais atribuições

    *pa = 77;
    *pb = 0.33;
    *pc = '#';

    printf("\nValores: %d %.2f %c", a, b, c);
    printf("\nPonteiros: %d %.2f %c", *pa, *pb, *pc);
    printf("\nEndereços: %p %p %p", pa, pb, pc);


}
