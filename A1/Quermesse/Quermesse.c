#include <stdio.h>
#include <stdlib.h>

int alocadorVetor(int);


int main() {
    
    int n,i;
    
    scanf("%d",&n);
    i = 0;
    while(n!=0) {
            
        i++;
        int resul = alocadorVetor(n);
        printf("Teste %d\n",i);
        printf("%d\n",resul);
        printf("\n");
        scanf("%d",&n);
        
    }
    

    return 0;
    
}

int alocadorVetor(int part) {
    
    int *v;
    int i;
    int valor;
    
    v =(int *)malloc(part*sizeof(int));
    
    
    for(i=0 ; i <part ; i++) {
        
        scanf("%d",&v[i]);
        if(v[i] == i+1) {
            
            valor = v[i];
            
        }    
    }
    free(v);
    return valor;
    
    
}