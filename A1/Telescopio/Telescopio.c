#include <stdio.h>
#include <stdlib.h>

#define OLHO 40000000


int vetorCalculaEstrela(int,int);

int main() {
    
    
    int area, estrelas;
    
    scanf("%d",&area);
    scanf("%d",&estrelas);
    
    int resul = vetorCalculaEstrela(area,estrelas);
    
    printf("%d\n", resul);
    
    return 0;
    
    
}


int vetorCalculaEstrela(int a, int n){
    
    int *v;
    int f;
    int contador = 0;
    int i =0;
    v = (int*)malloc(n*sizeof(int));
    
    while( i < n) {
        i++;
        scanf("%d\n",&f);
        if (a*f >= OLHO) {
            
            contador++;
            
        }
        
        
        
    
        
        
    }
    free(v);
    return contador;
    
    
}