#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int cod;
    char nome[30]; 
    int level, vida, atq, def;
    int paralis;
}DadosMonstro; //associando "DadosMonstro" à definição da struct

int main()
{
    DadosMonstro pikachu, chikorita; //não precisa de struct antes
    DadosMonstro *pt = &pikachu; //ponteiro para pikachu

    int codPikachu = pt -> cod;

    float txPikachu = pt -> txcap;
}