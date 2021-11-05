#include <stdio.h>
#include <stdlib.h>

//definindo variáveis
int topo = -1, tam, *pilha;
char c;

//função empilha
void empilha()
{
    if(topo == tam-1)
    {
        printf("\n ** pilha cheia ** \n");
    }
    else
    {
        topo++;
        pilha[topo] = c;
    }
}

//função desempilha
void desempilha()
{
    if(topo == -1)
    {
        printf("\n ** pilha vazia ** \n");
    }
    else
    {
        c = pilha[topo];
        topo--;
    }
}

int main()
{
//variável do laço 'for'
    int i;

//alocação de memória
    pilha = (char*)malloc(tam*sizeof(char));

//tamanho da pilha
    printf("\nSelecione a quantidade de caracteres da sua frase: ");
    scanf("%d", &tam);

//usuário informando frase para inverter
    printf("\nSelecione, caractere por caractere, a frase que deseja inverter:\n");

    if(pilha == NULL)
    {
        printf("sem espaco na memoria");
    }
    else
    {
        for(i = 0; i < tam; i++)
        {
//limpando teclado
            setbuf(stdin, NULL);
            scanf("%c", &c);
            empilha();
        }

//resultado para o usuário
    printf("\nA sua frase invertida eh\n>>> ");

//printando caracteres
    for(i = 0; i < tam; i++)
    {
        desempilha();
        printf("%c", c);
    }
//liberando memória
    free(pilha);
    }

//espaço
    printf("\n\n");

//pausa
    system("pause");
}
