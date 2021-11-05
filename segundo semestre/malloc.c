#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, i, tam;

//communicação com o usuário
    printf("Selecione o fator do vetor\n");
    scanf("%d", &tam);

//alocando memória
    v = (int*)malloc(tam * sizeof(int));

//testando se alocou
    if(v == NULL)
    {
        printf("Memória insuficiente!\n");
    }

    else{

//utilizando a memória alocada
    for(i = 0; i < tam; i++){
        v[i] = i;
    }

    printf("%d\n", v[0]);
    printf("%d\n", v[tam - 1]);

//liberando memória alocada
    free(v);
    }

    return 0;
}