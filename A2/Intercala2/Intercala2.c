#include <stdio.h>
#include <stdlib.h>

void intercala(int *, int,  int ,  int );

int main()

{
    int *v1, *v2,*vr, tam_v1, tam_v2, tam_vr, i, j, k;

    scanf("%d", &tam_v1);
    scanf("%d", &tam_v2);
    tam_vr = tam_v1 + tam_v2;
    
    vr = (int *)malloc(tam_vr*sizeof(int));


    for (i=0; i<tam_v1+tam_v2; i++)
    {
        scanf("%d",&vr[i]);

    }
   
    intercala(vr, 0,tam_v1, tam_vr);

    return 0;
}


void intercala(int *v, int e, int m, int d)
{
    
    
    int esq_fim = m-1, tamanho = d, *vTemp, i, j, iTemp;
    vTemp = (int*) malloc(tamanho * sizeof(int));

    for(i=0, j=m, iTemp=0; i<=esq_fim && j<d; iTemp++)
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

    for(;i<=esq_fim; i++, iTemp++)
    {
        vTemp[iTemp] = v[i];
    }

    for(;j<=d; j++, iTemp++)
    {
        vTemp[iTemp] = v[j];
    }

    for(i=e, j=0; i<=d; i++, j++)
    {
        v[i] = vTemp[j];
    }

    for(i=0; i<tamanho; i++) {

        printf("%d\n", v[i]);
    }

    free(vTemp);
}