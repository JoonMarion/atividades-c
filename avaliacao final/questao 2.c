#include <stdio.h>
#include <locale.h>

struct nasc
{
    int mes;
    int ano;
};

struct gado
{
    int codigo;
    float leite;
    float alim;
    struct nasc nascimento;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "");
    struct gado x[2000];
    int i;
    int abateCont = 0;
    int r = 1;
    float totalleite, totalalim, totalleiteabate, alimentodia, totalalimabate;

    for (i = 1; i <= 2000; i++)
    {
        printf("informe o c�digo do gado %d: \n", i);
        scanf("%d", &x[i].codigo);

        printf("informe quantos litros de leite foi produzido na semana: \n");
        scanf("%f", &x[i].leite);

        printf("informe quantos quilos de alimento foi consumido na semana: \n");
        scanf("%f", &x[i].alim);

        printf("informe o m�s de nascimento: \n");
        scanf("%d", &x[i].nascimento.mes);

        printf("informe o ano de nascimento: \n");
        scanf("%d", &x[i].nascimento.ano);

        x[i].idade = 2021 - x[i].nascimento.ano;

        totalleite = x[i].leite + totalleite;

        totalalim = x[i].alim + totalalim;

        alimentodia = x[i].alim / 7;

        if (x[i].idade > 5 || x[i].leite < 40 || x[i].leite > 50 && x[i].leite < 70 && alimentodia > 50)
        {
            abateCont++;
        }
        else
        {
            totalleiteabate = totalleiteabate + x[i].leite;
            totalalimabate = totalalimabate + x[i].alim;
        }
    }

    printf("\nQuantidade total de leite produzida por semana na fazenda �: %.1f litros", totalleite);
    printf("\nQuantidade total de alimento consumido por semana na fazenda �: %.2f kg", totalalim);
    printf("\nQuantidade total de leite produzida por semana na fazenda ap�s o abate �: %.1f litros", totalleiteabate);
    printf("\nQuantidade total de alimento consumido por semana na fazenda ap�s o abate �: %.2f kg", totalalimabate);
    printf("\nQuantidade total de gados que v�o pro abate na fazenda: %d gados", abateCont);

    return (0);
}
