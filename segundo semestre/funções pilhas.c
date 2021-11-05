#include <stdio.h>
#include <stdlib.h>

//inicialização
int topo = 0, tam = 5, pilha[5], valor;

void iniciar()
{
topo = -1;
}

//função empilhar
void empilha()
{
    if(topo == tam-1){
        printf("\n >> Pilha cheia << \n");
    }
    else
    {
        topo++;
        pilha[topo] = valor;
    }
}

//função desempilhar
void desempilha()
{
    if(topo == -1)
    {
        printf("\n >> Pilha vazia << \n");
    }
    else
    {
        valor = pilha[topo];
        topo--;
    }
}

//função para ver elemento do topo da pilha
void acessoTopo()
{
    if(topo == -1)
    {
        printf("\n >> Pilha vazia << \n");
    }
    else
    {
        printf("\n>> Elemento do topo da pilha: %d <<\n", pilha[topo]);
    }
}

//função da situação da pilha
void situacaoPilha()
{
    if(topo == -1)
    {
        printf("\n >> Pilha vazia << \n");
    }
    else if(topo == tam - 1)
    {
        printf("\n >> Pilha cheia << \n");
    }
    else
    {
        printf("\n>> Total de elementos na pilha: %d <<\n", topo+1);
        printf("\n>> Espaco disponivel na pilha: %d <<\n", tam-(topo+1));
    }
}

