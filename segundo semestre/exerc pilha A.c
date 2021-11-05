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

int main()
{
    int op, i, r = 0;

//laço de repetição
 do{

//comunicação com o usuário
    printf("\n** Selecione a opcao desejada: **\n");
    printf("\n1 - inicializar a pilha");
    printf("\n2 - inserir valor na pilha");
    printf("\n3 - remover valor da pilha");
    printf("\n4 - mostrar elemento do topo da pilha");
    printf("\n5 - mostrar situacao da pilha");
    printf("\n6 - sair\n");
    scanf("%d", &op);

//opções para o usuário 
    switch(op)
    {
    case 1:
    iniciar();
    printf("\n** Pilha iniciada! **\n");
    break;

    case 2:
    for(i = 1; i <= tam; i++)
    {
        printf("\n** Insira o valor %d na pilha: **\n>>> ", i);
        scanf("%d", &pilha[i]);
        valor = pilha[i];
        empilha();
    }
    break;

    case 3:
    printf("\n** Ultimo elemento removido da pilha **\n");
    desempilha();
    break;

    case 4:
    acessoTopo();
    break;

    case 5:
    situacaoPilha();
    break;

    case 6:
    r = 1;
    break;
    }

 }while(r == 0);


free(pilha);
system("pause");
system("cls");
return 0;
}