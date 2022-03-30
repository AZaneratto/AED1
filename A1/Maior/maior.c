#include <stdio.h>


int main() {
    
    int a,b,c, maior;
    maior = 0;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if( a > b && a > c) {
        
        maior = a;
        
        
    }
    
    else if (b > c ) {
        
        maior = b;
        
    }
    
    else {
        
        maior = c;
    }
    
    printf("%d eh o maior.\n", maior);
    
    return 0;
    
}