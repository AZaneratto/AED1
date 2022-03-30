#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *, int, int,int);
void intercala(int *, int, int, int,int);

int main()
{
    int *v, n, i, k;

    scanf("%d",&n);
    k = n;
    v = (int*) malloc((n+2) * sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    for(i=0; i<k; i++)
    {
        if (i==k-1)
        {
            printf("%d\n", v[i]);
        }
        else
        {
            printf("%d ", v[i]);
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d%s",v[i], i<n-1? " ":"\n");
    }

    mergeSort(v, 0, n-1, k);



    return 0;
}

void mergeSort(int *v, int e, int d, int n)
{

    int meio,i;

    if(e < d)
    {
        meio = (e+d)/2;
        mergeSort(v, e, meio, n);
        mergeSort(v, meio+1, d, n);
        intercala(v, e, meio+1, d, n);

    }
}

void intercala(int *v, int e, int m, int d,int n)
{



    int *vTemp, lim_esq = m-1, tamanho = d-e+1, i, j, iTemp;
    vTemp = (int*) malloc(tamanho* sizeof(int));



    for(i=e, j=m, iTemp=0; i<=lim_esq && j<=d; iTemp++)
    {
        if(v[i] < v[j])
        {
            vTemp[iTemp] = v[i];
            i++;
        }
        else
        {
            vTemp[iTemp] = v[j];
            j++;
        }
    }

    for(;i<=lim_esq; iTemp++, i++)
    {
        vTemp[iTemp] = v[i];
    }

    for(;j<=d; iTemp++, j++)
    {
        vTemp[iTemp] = v[j];
    }

    for(i=e, j=0; i<=d; i++, j++)
    {
        v[i] = vTemp[j];
    }

    for(i=0; i<n; i++)
    {
        printf("%d%s",v[i], i<n-1? " ":"\n");
    }






}