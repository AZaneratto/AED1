#include <stdio.h>
#include <stdlib.h>

void selectionSort(int*,int);

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
    selectionSort(v,n);
    return 0;
}

void selectionSort(int *v, int n)
{
    int i, k, j, aux,iMin, troca;

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
        for(j=i+1, iMin=i; j<n; j++)
        {

            if( v[j]<v[iMin])
            {

                iMin=j;
                troca++;
                
            }

        }
        
        aux=v[i];
        v[i] = v[iMin];
        v[iMin] = aux;
        
        
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

    printf("%d\n",troca);
}