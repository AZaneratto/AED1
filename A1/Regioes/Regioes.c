#include <stdio.h>

int main() {
    
    int corte, regiao;
    
    scanf("%d", &corte);
    
    regiao = ((corte*(corte+1)/(2)))+1;
    
    printf("%d\n",regiao);
    
    
    return 0;
    
    
    
    
}