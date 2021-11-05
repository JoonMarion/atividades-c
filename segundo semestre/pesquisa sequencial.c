int pesquisaSequencial(int v[], int pesq, int tam)
{
    int i;
    for(i = 0; i < tam - 1; i++)
    {
        if(v[i] == pesq)
        {
            return i; //encontrado
        }
    }
    return -1; //não encontrado
}