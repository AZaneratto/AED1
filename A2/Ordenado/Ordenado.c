#include <stdio.h>
#include <stdlib.h>

int verificaCrescente(int *, int);
int verificaDecrescente(int *, int);

int main()

{
    int *v;
    int  i, n, aux1, aux2;
    v = (int *)malloc(n*sizeof(int));
     while (scanf("%d", &n) != EOF)
     {
        for (i = 0; i < n; i++)

        {
            scanf("%d", &v[i]);

        }

        aux1 = verificaDecrescente(v, n);
        aux2 = verificaCrescente(v,n);

        if ( aux1 || aux2  == 1 ){

            printf("S\n");

        }

        else
        {
            printf("N\n");

        }

     }
    return 0;
}


int verificaDecrescente(int *v, int n)
{
    int aux,i;
    aux = 1;
    for (i = 0; i<n; i++)
    {
        if (v[i] > v[i-1] && i != 0)

        {

            aux = 0;

         }

    }

    if(aux == 1)
    {
        return 1;
    }
    
    else 
    {
        return 0;
    }



}


int verificaCrescente(int *v, int n)
{
    int aux,i;
    aux = 1;
    for (i = 0; i<n; i++)
    {
        if (v[i-1] > v[i])

        {

            aux = 0;

        }

    }

    if(aux == 1)
    {
        return 1;
    }
    
    else 
    {
        return 0;
    }



}