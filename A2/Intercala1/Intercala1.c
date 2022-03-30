#include <stdio.h>
#include <stdlib.h>

void intercala(int *, int ,  int ,  int );

int main()

{
    int *v1, *v2,*vr, tam_v1, tam_v2, tam_vr, i, j;

    scanf("%d", &tam_v1);
    scanf("%d", &tam_v2);

    v1 = (int *)malloc(tam_v1*sizeof(int));
    v2 = (int *)malloc(tam_v2*sizeof(int));
    tam_vr = tam_v1+tam_v2;
    vr = (int *)malloc(tam_vr*sizeof(int));


    for (i=0; i<tam_v1; i++)
    {
        scanf("%d",&v1[i]);

    }
    for (i=0; i<tam_v2; i++)
    {
        scanf("%d",&v2[i]);

    }

    for(i=0; i < tam_v1; i++)
    {
        vr[i] = v1[i];

    }

    for(i=0, j=tam_v1; i < tam_v2; i++, tam_v1++)
    {
        vr[tam_v1] = v2[i];
    }

    intercala(vr, 0, tam_v1, tam_vr);


    return 0;
}


void intercala(int *v, int e,  int m,  int d)
{

    for( int k=0; k<d; k++){
        printf("%d ",v[k]);
    }

    int *temp, i, j, fim_esq = m-1;
  
    temp = (int *)malloc(d*sizeof(int));
    for( i=0; e <= fim_esq && m <d; i++)
    {
        if (v[e] < v[m])
        {
            temp[i] = v[e];
            e++;
        }
        else
        {
            temp[i] = v[m];
            m++;
        }
    }

    for (; e <= fim_esq;  e++, i++)
    {
        temp[i] = v[e];
    }

    for (; m<d; m++, i++)
    {
        temp[i] = v[m];

    }


    for ( i=0; i<d; i++)
    {
        v[i] = temp[i];
    }

    for(j=0; j<d; j++)
    {
        printf("%d\n", temp[j]);
    }



}