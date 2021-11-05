#include <stdio.h>
#include <stdlib.h>

struct Fila
{
    int capacidade;
    float *dados;
    int primeiro;
    int ultimo;
    int nitens;
};

//criar fila
void criarFila(struct Fila *f, int c)
{

    f->capacidade = c;
    f->dados = (float *)malloc(f->capacidade * sizeof(float));
    f->primeiro = 0;
    f->ultimo = -1;
    f->nitens = 0;
}

//insere elemento no final da fila
void inserir(struct Fila *f, int v)
{
    if (f->ultimo == f->capacidade - 1)
    {
        f->ultimo = -1; //representação circular
    }
    f->ultimo++;

    //incrementa o ultimo e insere
    f->dados[f->ultimo] = v;

    //mais um item inserido
    f->nitens++;
}

//remove primeiro elemento
int remover(struct Fila *f)
{
    f->primeiro++;
    if (f->primeiro == f->capacidade)
    {
        f->primeiro = 0;
    }
    f->nitens--;

    return 1;
}

//testa se fila está vazia
int estaVazia(struct Fila *f)
{
    //retorna verdadeiro se a fila está Vazia
    return (f->nitens);
}

//testa se fila está cheia
int estaCheia(struct Fila *f)
{
    //retorna verdadeiro se a fila está cheia
    return (f->nitens == f->capacidade);
}

//mostrar todos os elementos da fila
int mostrarFila(struct Fila *f)
{
    int cont, i;
    i = f->primeiro;

    for (cont = 0; cont < f->nitens; cont++)
    {
        printf("%.2f\n", f->dados[i++]);
        if (i == f->capacidade)
        {
            i = 0;
        }
    }
}

//mostrar primeiro elemento da fila
void primeiroElemento(struct Fila *f)
{
    printf("%.2f\n", f->dados[f->primeiro]);
}

//mostrar ultimo elemento da fila
void ultimoElemento(struct Fila *f)
{
    printf("%.2f\n", f->dados[f->ultimo]);
}

//mostra quantos elementos tem na Fila
void tamanhoFila(struct Fila *f)
{
    printf("%d\n", f->nitens);
}

//libera espaço de memória da fila
void liberarFila(struct Fila *f)
{
    free(f->dados);
}

//função principal
int main()
{
    int opcao, capa, ret;
    float valor;
    struct Fila umaFila;

    //criar a fila
    printf("\n>>> Qual a capacidade da fila? ");
    scanf("%d", &capa);
    criarFila(&umaFila, capa);

    //mostrar menu
    while (1)
    {
        printf("\n1 - Inserir elemento\n2 - Remover elemento\n3 - Mostrar fila\n4 - Mostrar primeiro elemento da fila\n5 - Mostrar ultimo elemento da fila\n6 - Mostrar a quantidade de elementos na fila\n0 - Sair\n\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0: // liberar memoria
            liberarFila(&umaFila);
            return 0;

        case 1: // insere elemento
            if (estaCheia(&umaFila))
            {
                printf("\nFila Cheia1\n\n");
            }
            else
            {
                printf("\n>>> Entre com o valor a ser inserido: ");
                scanf("%f", &valor);
                inserir(&umaFila, valor);
            }
            break;

        case 2: //remover elemento
            ret = estaVazia(&umaFila);
            if (ret == 0)
            {
                printf("\nFila Vazia!\n\n");
            }
            else
            {
                ret = remover(&umaFila);
                if (ret == 1)
                {
                    printf("\n\n>>> Valor removido com sucesso <<<\n\n");
                }
            }
            break;
            
        case 3: //mostrar fila
            ret = estaVazia(&umaFila);
            if (ret == 0)
            {
                printf("\nFila Vazia!\n\n");
            }
            else
            {
                printf("\n* Conteudo da fila: \n");
                mostrarFila(&umaFila);
            }
            break;

        case 4:  //mostrar primeiro elemento da fila
            ret = estaVazia(&umaFila);
            if (ret == 0)
            {
                printf("\nFila Vazia!\n\n");
            }
            else
            {
                printf("\n* O primeiro elemento da fila eh: ");
                primeiroElemento(&umaFila);
            }
            break;

        case 5:  //mostrar ultimo elemento da fila
            ret = estaVazia(&umaFila);
            if (ret == 0)
            {
                printf("\nFila Vazia!\n\n");
            }
            else
            {
                printf("\n* O ultimo elemento da fila eh: ");
                ultimoElemento(&umaFila);
            }
            break;

        case 6:  //mostrar quantidade de elementos na fila
            ret = estaVazia(&umaFila);
            if (ret == 0)
            {
                printf("\nFila Vazia!\n\n");
            }
            else
            {
                printf("\n* A quantidade de elementos na fila eh: ");
                tamanhoFila(&umaFila);
            }
            break;
        
        default:
            printf("\nOpcao invalida!\n\n");
            break;
        }
    }

    return 0;
}