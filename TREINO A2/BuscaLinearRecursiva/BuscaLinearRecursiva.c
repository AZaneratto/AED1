#include <stdio.h>
#include <stdlib.h>

int buscaRecursiva(int *, int, int);

int main()
{

    int x, tam, i,j, procurado,qtdDeProcura;
    scanf("%d", &tam);
    int *v;
    v = (int*)malloc(tam*sizeof(int*));
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
    
    scanf("%d",&qtdDeProcura);

    for (j = 0; j < qtdDeProcura; j++)
    {
        scanf("%d", &procurado);
        if (buscaRecursiva(v, tam, procurado) != -1)
        {
            printf("ACHEI\n");
        }

        else
        {
            printf("NAO ACHEI\n");
        }
    }
    return 0;
}

int buscaRecursiva(int *v, int n, int x)
{
    if (n==0 || v[n - 1] == x)
    {
        return n-1;
    }
    else
    {
        return buscaRecursiva(v, n-1, x);

    }
}
