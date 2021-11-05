#include <stdio.h>
#include <stdlib.h>

//inicialização
int topo = -1;


void empilha(){
    if(topo == tam-1){
        printf("\n ** pilha cheia ** \n");
    }else
    {
        topo++;
        pilha[topo] = valor;
    }
}

void desempilha(){
    if(topo == tam-1){
        printf("\n ** pilha vazia ** \n");
    }else
    {
         valor = pilha[topo];
        topo--;
    }
}

void acessoTopo(){
    if(topo == tam-1){
        printf("\n ** pilha vazia ** \n");
    }else
    {
        printf("\n Elemento do topo: %d \n", pilha[topo]);
    }
}


void situacaoPilha(){
    if(topo == -1){
        printf("\n ** pilha vazia ** \n");
    }else
    {
        if(topo == tam - 1)
        {
            printf("\n ** pilha cheia ** \n");
        }
        else
        {
            printf("\n Total de elementos na pilha: %d \n", topo+1);
            printf("\n Espaço disponível na pilha: %d \n", tam-(topo+1);
        }
    }
}


