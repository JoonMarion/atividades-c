#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main()
 {
  system("color 04");
 setlocale(LC_ALL, "");

 int vetor[9], maiorValor = -99999999;

 printf("\n\t> Selecione 10 valores inteiros:\n");
 scanf("%d", &vetor[0]);
 for(vetor[0] != 0; vetor[0] > maiorValor; maiorValor = vetor[0]);

 scanf("%d", &vetor[1]);
 for(vetor[1] != 0; vetor[1] > maiorValor; maiorValor = vetor[1]);

 scanf("%d", &vetor[2]);
 for(vetor[2] != 0; vetor[2] > maiorValor; maiorValor = vetor[2]);

 scanf("%d", &vetor[3]);
 for(vetor[3] != 0; vetor[3] > maiorValor; maiorValor = vetor[3]);

 scanf("%d", &vetor[4]);
 for(vetor[4] != 0; vetor[4] > maiorValor; maiorValor = vetor[4]);

 scanf("%d", &vetor[5]);
 for(vetor[5] != 0; vetor[5] > maiorValor; maiorValor = vetor[5]);

 scanf("%d", &vetor[6]);
 for(vetor[6] != 0; vetor[6] > maiorValor; maiorValor = vetor[6]);

 scanf("%d", &vetor[7]);
 for(vetor[7] != 0; vetor[7] > maiorValor; maiorValor = vetor[7]);

 scanf("%d", &vetor[8]);
 for(vetor[8] != 0; vetor[8] > maiorValor; maiorValor = vetor[8]);

 scanf("%d", &vetor[9]);
 for(vetor[9] != 0; vetor[9] > maiorValor; maiorValor = vetor[9]);

 printf("\n\a\t> O maior valor é: %d\n\n", maiorValor);
 system("pause");
 }


