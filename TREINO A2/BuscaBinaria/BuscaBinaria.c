#include <stdio.h>
#include <stdlib.h>




int buscaBinaria( int *, int, int);


int main() 
{
    
    int tam,procurado, qntdProcura,i;
    scanf("%d",&tam);
    int *v;
    v = (int*)malloc(tam*sizeof(int*));
    
    for(i=0; i<tam; i++ ) 
    {
        scanf("%d", &v[i]);
    }
    
    scanf("%d",&qntdProcura);
    
    for(int j=0; j<qntdProcura; j++)
    {
        scanf("%d",&procurado);
        
        if(buscaBinaria(v,tam,procurado)!=-1) {
            
            printf("ACHEI\n");
            
            
        }
        
        else 
        {
            printf("NAO ACHEI\n");
        }
        
        
        
    }
    return 0;
    
    
}

int buscaBinaria(int *v, int n, int x)
{
    
    int esq, dir, meio;
    esq = 0;
    dir = n-1;
    
    while(esq <= dir)
    {
        
        meio = (esq + dir)/2;
        
        if(v[meio]==1)
        {
            
            return 1;
           
        }
        
        else if (v[meio]>x)
        {
            
            dir = meio+1;
            
        }
        else
        {
            
            esq = meio +1;
            
        }
    }
    return -1;
    
}