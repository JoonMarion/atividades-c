#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

    int cont, exemplo[5];

    for(cont = 0; cont <= 4; cont++){
        printf("Informe um valor:");
        scanf("%d", &exemplo[cont]);
    }

    printf("\nEstes são os elementos do vetor: \n");

    for(cont = 0; cont <= 4; cont++){
        exemplo[cont] = exemplo[cont] * 2;
        printf("Elemento: %d\n", exemplo[cont]);
    }

}
