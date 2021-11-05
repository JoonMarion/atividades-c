#include <stdio.h>
#include <stdlib.h>


//inicialização
int tam = 0, topo = -1, valor = 0, i = 0;
int *pilha;

void empilha(){
    if(topo == tam-1){
        printf("\n * pilha cheia * \n");
    }else
    {
        topo++;
        pilha[topo] = valor;
    }
}

void desempilha(){
    if(topo == -1){
        printf("\n * pilha vazia * \n");
    }else
    {
        valor = pilha[topo];
        topo--;
    }
}

void main()
{
    printf("Selecione o tamanho da pilha: ");
    scanf("%d", &tam);
    
    pilha = (int*)malloc(tam * sizeof(int));

    if(pilha == NULL){
        printf("out of memory space");
    }
    else
    {
        for(i = 0; i < tam; i = i + 2){
            valor = i;
            empilha();    
    }
    printf("\nthe stack values are:");
    for(i = 0; i < tam; i = i + 2)
    {
        desempilha();
        printf("%d\n", valor);  
    }        
    free(pilha);
    }
}