#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

struct produto
{
   char nome[15];
   char setor[2];
   float quantidade;
   float preco;
};

int main()
{
   setlocale(LC_ALL, "");
   struct produto estoque[3];
   int i, x, contProduto = 0;
   float capital = 0.0;

   for (i = 1; i <= 3; i++)
   {
      printf("\nInsira o nome do produto %d: ", i);
      setbuf(stdin, NULL);
      fgets(estoque[i].nome, 15, stdin);

      printf("\nInsira o setor do produto: ");
      setbuf(stdin, NULL);
      scanf("%s", &estoque[i].setor);

      printf("\nInsira a quantidade do produto: ");
      setbuf(stdin, NULL);
      scanf("%f", &estoque[i].quantidade);

      printf("\nInsira o pre�o do produto: ");
      setbuf(stdin, NULL);
      scanf("%f", &estoque[i].preco);

      capital = estoque[i].preco * estoque[i].quantidade;
   }

   printf("\nO que voc� deseja? \n1 - N�mero de produtos no setor 'X'\n \n2 - Capital investido\n \n3 - Sair\n");
   scanf("%d", &x);

   char contSetor[2];

   switch (x)
   {
   case 1:
      printf("\nSelecione o setor: ");
      scanf("%s", &contSetor);
      for (i = 1; i <= 3; i++)
      {
         if (strcmp(contSetor, estoque[i].setor) == 0)
         {
            contProduto++;
         }
      }
      printf("\nA quantidade de produtos nesse setor �: %d \n", contProduto);
      break;

   case 2:
      printf("\nO capital do investido �: R$%.2f", capital);
      break;

   default:
      printf("\nVoc� escolheu sair");
      break;
   }

   return 0;
}
