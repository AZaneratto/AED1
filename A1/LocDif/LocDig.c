#include <stdio.h>
#include <stdlib.h>



int main() {
    
    int  n,m, resul, found,e ;
    scanf("%d",&n);
    
    m = n + 1;
    int *v;
    v = (int *) malloc(n * sizeof(int));
    
    for(int i=0; i < n; i++) {
        
        scanf("%d",&v[i]);
        
    }
    
    
    
    int *w;
    w = (int *) malloc(m*sizeof(int));
    
    for(int k=0; k < m; k++) {
        
         scanf("%d",&w[k]);
        
    }
    
   
    for (int s=0;s<m;s++) {
        e = w[s];
        found = 0;
        for (int j=0; j<n;j++) {
            if(e == v[j]) {
                
                found = 1;
                break;
            
                
                
                }
        }
        if ( found == 0) {
            
            resul = e;
        } 
     }
    
        
    printf("%d\n",resul);
    
    
    
    return 0;    


}

    
    
    
