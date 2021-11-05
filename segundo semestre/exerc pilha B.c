#include <stdio.h>
#include <stdlib.h>

int topo = -1, tam = 8, *pilha, valor;

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
        pilha[topo] = valor;
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
        valor = pilha[topo];
        topo--;
    }
}

int main()
{
    int i, comp, esta = 0; 

//alocação
    pilha = (int*)malloc(tam * sizeof(int));

    if(pilha == NULL)
    {
        printf("out of memory space");
    }
    else if(pilha != NULL)
    {
        for(i = 0; i < tam; i++)
        {
        printf("Enter the license plate %d: ", i + 1);
        scanf("%d", &valor);
        empilha();  
        }    
    }

//lendo placa para busca
        printf("\nType the license plate to find him in the village: ");
        scanf("%d", &comp);

//pesquisando carro na vila
        for(i = 0; i < tam; i++)
        {
            if(pilha[i] == comp)
            {
                esta = 1;
            }      
        }
    
//caso não esteja na vila
        if(esta == 1)
        {
            printf("\n<The car is in village>\n");
        }
        else
        {
            printf("\n<The car is not in the village>\n");
            
            return 0;
        }

//printando carros que devem sair
        for(i = 0; i < tam; i++)
    {
        desempilha();

        if(comp == valor)
        {
            break;
        }
        else
        {
            printf("\nThe car with the license plate %d needs to leave for the car %d to be removed", valor, comp);
        }

    }
    
    free(pilha);

    return 0;
}
