#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct estoque
struct Estoque
{

//informções dos produtos
    int cod, quant;
    float preco;
    char nome[15];
};

//função principal
int main()
{

//definindo variáveis e vetor da struct
    struct Estoque pedido[6];
    int codigo, i = 1, x = 1, quantidadeD = 0;
    int esta = 0, pd;
    float precoTotal = 0.0, precoTotalNota = 0.0;

//valores atribuidos aos produtos na struct
    pedido[1].cod = 12;
    strcpy(pedido[1].nome, "Iphone");
    pedido[1].preco = 3899.99;
    pedido[1].quant = 5;
    
    pedido[2].cod = 34;
    strcpy(pedido[2].nome, "Samsung Galaxy");
    pedido[2].preco = 2249.99;
    pedido[2].quant = 6;

    pedido[3].cod = 56;
    strcpy(pedido[3].nome, "Xiaomi");
    pedido[3].preco = 1554.99;
    pedido[3].quant = 4;

    pedido[4].cod = 78;
    strcpy(pedido[4].nome, "Smart Watch");
    pedido[4].preco = 349.99;
    pedido[4].quant = 8;

    pedido[5].cod = 9;
    strcpy(pedido[5].nome, "Miband");
    pedido[5].preco = 249.99;
    pedido[5].quant = 7;

//laço de repetição
do{

//comunicação com o usuário
    printf("\n>>> Adicione ao pedido o item que deseja digitando seu codigo <<<\n");
    printf("\n     Codigo 12 - Iphone");
    printf("\n     Codigo 34 - Samsung Galaxy");
    printf("\n     Codigo 56 - Xiaomi");
    printf("\n     Codigo 78 - Smart Watch");
    printf("\n     Codigo 9 - MiBand");
    printf("\n     Codigo 0 - Encerrar pedido\n>>> ");
    scanf("%d", &codigo);

//comando para encerrar o pedido e calcular valor total
if(codigo == 0)
{
    x = 0;
    break;
}
else //caso não queira encerrar o pedido
{
    for(i = 1; i <= 5; i++)  //laço pra legitimar se o código se encontra no estoque
    {
        if(codigo == pedido[i].cod)
        {
            esta = 1;
            pd = i;
            break;
        }
        else
        {
            esta = 0;
        }
    }

        if(esta == 0)  //caso não tenha o código no estoque
        {
            printf("\n>> Esse codigo de produto nao existe! <<\n");
        }
        else
        {
            printf("\n*** Selecione a quantidade desejada ***\n\n>>> ");  //caso tenha o produto, pedindo a quantidade
            scanf("%d", &quantidadeD);

            if(quantidadeD > pedido[pd].quant)  //verificando se tem a quantidade em estoque
            {
                printf("\n\n* Quantidade fora de estoque *\n\n"); //print caso não tenha
            }
            else
            {
                //retirando do estoque o pedido do cliente
                pedido[pd].quant = pedido[pd].quant - quantidadeD;

                //calculando o preço total do pedido
                precoTotal = quantidadeD * pedido[pd].preco;

                //calculando o preço total da nota
                precoTotalNota = precoTotalNota + (quantidadeD * pedido[pd].preco);

                //printando pedido e valor da nota
                printf("\n*** Voce adicionou %d aparelho(s) %s ao pedido ***", quantidadeD, pedido[pd].nome);
                
                //printdo valor do pedido atual
                printf("\n>>> O valor da nota eh: R$%.2f <<<\n", precoTotal);
            }

        }
    
    }

}while(x != 0);  //término do laço do - while

//pedido total
printf("\n*>> O valor total do pedido eh: R$%.2f <<*\n", precoTotalNota);

    return 0;
}