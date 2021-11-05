#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *b, *c, i, tam;

//communicação com o usuário
    printf("Selecione o fator do vetor\n");
    scanf("%d", &tam);

//alocando memória
    a = (int*)malloc(tam * sizeof(int));
    b = (int*)malloc(tam * sizeof(int));
    c = (int*)malloc(tam * sizeof(int));

//selecionar o valor dos vetores
  for(i = 0; i < tam; i++){
      printf("Selecione o valor %d do vetor A: \n", i + 1);
      scanf("%d", &a[i]);   
   } 

  for(i = 0; i < tam; i++){
      printf("Selecione o valor %d do vetor B: \n", i + 1);
      scanf("%d", &b[i]);   
   } 

//soma dos vetores
   for(i = 0; i < tam; i++){
      c[i]  = a[i] + b[i];
   } 

//imprimindo tudo
    for(i = 0; i < tam; i++){
      printf("%d + %d = %d\n", a[i], b[i], c[i]);   
   } 

//liberando memória 
free(a);
free(b);
free(c);

return 0;
}

