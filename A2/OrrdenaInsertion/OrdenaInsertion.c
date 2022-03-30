#include <stdio.h>
#include <stdlib.h>

void insertionSort(int*,int);

int main()

{
    int *v;
    int i, n;
    scanf("%d", &n);
    v = (int *)malloc(n*sizeof(int));
    for (i=0; i<n; i++)
    {
        scanf("%d",&v[i]);

    }
    insertionSort(v,n);
    return 0;
}

void insertionSort(int *v, int n)
{

    int chave, i, j, k, troca;
    troca = 0;

    for(k=0; k<n; k++)
    {
        if (k==n-1)
        {
            printf("%d\n",v[k]);

        }
        else
        {
            printf("%d ",v[k]);
        }
    }

    for(i=1; i<n; i++)
    {
        chave = v[i];
        j = i-1;
        while (j>=0 && v[j] >= chave)
        {
            v[j+1] = v[j];
            v[j] = chave;
            j = j-1;
            troca++;
            for(k=0; k<n; k++)
            {
                if (k==n-1)
                {
                    printf("%d\n",v[k]);

                }
                else
                {
                    printf("%d ",v[k]);
                }
            }
        }
    }

    for(k=0; k<n; k++)
    {
        if (k==n-1)
        {
            printf("%d\n",v[k]);
        }

        else
        {
            printf("%d ",v[k]);
        }
    }

    printf("Trocas:%d\n",troca);
    if( troca == 0)
    {
        printf("MELHOR CASO\n");

    }
    else if( troca == ((n*n)-n)/2)
    {
        printf("PIOR CASO\n");
    }

    else
    {
        printf("CASO ALEATORIO\n");
    }



}


