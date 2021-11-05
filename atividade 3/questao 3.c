#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main()
 {
 setlocale(LC_ALL, "");

 int NUM = 5, NP = 0, NI = 0;
 int vetor[NUM], r = 0, i = 0;
 printf("\n\t> Insira no programa 6 números inteiros:\n");

 do{
    scanf("%d", &vetor[i]);

 if(vetor[i] % 2 == 1){NI++;}
 else if(vetor[i] % 2 == 0){NP++;}

 r++;
 i++;

 }while(r <= NUM);

 printf("\t> Temos %d números ímpares e %d números pares.\n\n", NI, NP);

 system("pause");

 }
