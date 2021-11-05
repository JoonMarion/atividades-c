#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
//acento
    setlocale(LC_ALL, "");

    float A[5], maiorValor = -9999999.0;
    int cont;

    for(cont = 0; cont <= 4; cont++){
        printf("Informe um valor:");
        scanf("%f", &A[cont]);
        if(A[cont] > maiorValor){
        maiorValor = A[cont];}
        }

     for(cont = 0; cont <= 4; cont++){
        A[cont] = A[cont] / maiorValor;}

     for(cont = 0; cont <= 4; cont++){
        printf("\n%.2f\n", A[cont]);}
}



