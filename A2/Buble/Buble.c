#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int*,int);

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
    bubbleSort(v,n);
    return 0;
}

void bubbleSort(int *v, int n)
{
    int i, k, j, aux, troca;

    for(k=0; k<n; k++)
    {
        if(k == n-1)
            {
                printf("%d\n", v[k]);
            }
            else
            {
                printf("%d ",v[k]);
            }

    }

    troca = 0;
    for(i=0; i<n-1; i++ )
    {
        for(j=0; j<n-1; j++)
        {

            if( v[j]>v[j+1])
            {

                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                troca++;
                for(k=0; k<n; k++){
                    if(k == n-1)
                    {
                        printf("%d\n", v[k]);
                    }
                    else
                    {
                        printf("%d ",v[k]);
                    }
                }

            }
        }
    }
    for(k=0; k<n; k++)
    {
        if(k == n-1)
        {
            printf("%d\n", v[k]);
        }
        else
        {
             printf("%d ",v[k]);
        }


    }

    printf("Trocas: %d\n",troca);
}