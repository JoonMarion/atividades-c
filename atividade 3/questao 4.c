#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main()
 {
 setlocale(LC_ALL, "");

 int NOTAS = 9, i = 0, AA = 0, AR = 0;
 float vetor[NOTAS], MC = 0;

printf("\n\t> Insira a média de 10 alunos:\n");

do{
scanf("%f", &vetor[i]);

if(vetor[i] >= 7){AA++;}

else if(vetor[i] < 7){AR++;}

MC = vetor[i] + MC;

i++;
}while(i <= NOTAS);

MC = MC / 10;

printf("A média da classe é: %.2f\n", MC);
printf("A turma tem %d alunos aprovados e %d alunos reprovados.\n\n", AA, AR);

system("pause");
}


