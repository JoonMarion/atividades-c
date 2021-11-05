#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main()
 {
 setlocale(LC_ALL, "");
 int IDADE = 39, i = 0;
 int vetor[IDADE], r = 0, MI = -9999999, mi = 9999999, resultado;

 printf("Insira 40 idades e no final somaremos a menor e a maior:\n");
 do
{
    scanf("%d", &vetor[i]);

if(vetor[0] > MI){ MI = vetor[i] ;}
if(vetor[0] < mi){ mi = vetor[i] ;}

r++;

}while(r < IDADE);

resultado = MI + mi;

printf("A soma da maior e da menor idade é: %d\n\n", resultado);


}

