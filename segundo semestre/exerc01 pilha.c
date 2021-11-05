#include <stdio.h>
#include <stdlib.h>


//inicialização
int tam = 2, topo = -1, valor, pilha[2], r = 0;

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
    if(topo == -1){
        printf("\n ** pilha vazia ** \n");
    }else
    {
        valor = pilha[topo];
        topo--;
    }
}

int main()
{
    do{
    int operador;
    float resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);
    empilha();

    printf("Digite o segundo valor: ");
    scanf("%d", &valor);
    empilha();

    printf("\n Escolha a operacao: \n 1 ---> '+'\n 2 ---> '-'\n 3 ---> '*'\n 4 ---> '/'\n");
    scanf("%d", &operador);

    switch(operador){

        case 1:
        desempilha();
        resultado = valor;
        desempilha();
        resultado = valor + resultado;
        break;
   
        case 2:
        desempilha();
        resultado = valor;
        desempilha();
        resultado = valor - resultado;
        break;
    
        case 3:
        desempilha();
        resultado = valor;
        desempilha();
        resultado = valor * resultado;
        break;

        case 4:
        if(valor == 0){
            printf("Valor inválido");
            break;}
        else{
        desempilha();
        resultado = valor;
        desempilha();
        resultado = valor / resultado;
        break;}
    }
    printf("O resultado eh: %.2f\n", resultado);
    printf("\nDeseja realizar outro calculo?");
    printf("\n0 -> sim\n1 -> nao\n");
    scanf("%d", &r);

}while(r == 0);

system("cls");
system("PAUSE");
return 0;

}