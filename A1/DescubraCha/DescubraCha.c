#include <stdio.h>





int main(){
    
    int a,b,c,d,e,t, pontos;
    
    int i =0;
    pontos = 0;
    scanf("%d",&t);
    
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    int vetor[5] = {a,b,c,d,e};
    
    while (i < 6) {
        
        if(vetor[i] == t) {
            
            pontos ++;
        }
        
        i++;
    }
    
    printf("%d\n",pontos);
    return 0;
    
    
    
    
    
    
}