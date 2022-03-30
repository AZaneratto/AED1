#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    int n,q;
    scanf("%d",&n);
    int cont = 0;
    
    char  s[n][20];
    for (int i=0; i<n; i++) {
        
        scanf("%s",&s[i]);
        
    }
    
    scanf("%d",&q);
    char  p[q][20];
    
    for (int j=0; j<q ; j++){
        
        scanf("%s",&p[j]);
        
    }
 
    for ( int k =0; k<q ;k++) {
        cont = 0;
        for(int m=0; m<n; m++){
            
            if (strcmp(p[k],s[m])==0) {
                
                cont++;
            }
        }
        printf("%d\n", cont);
        
    }
 
    return 0;
 
    
}