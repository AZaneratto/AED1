#include <stdio.h>


int descobreAno(int);

int main() {
    
    int ano;
    
    scanf("%d", &ano);
    
    
    descobreAno(ano);
    
    if(descobreAno(ano) == 1) {
        
        printf("ANO BISSEXTO\n");
    }
    
    else {
        
        printf("ANO NAO BISSEXTO\n");
    }
    
    return 0;
    
}

int descobreAno(int a) {
    
    
    if ( a%400 == 0 ){
        
        
        return 1;
        
    }
    
    else if ( a%4 == 0 && a%100 !=0) {
        
        return 1;
    }
    
    else {
        
        return 0;
    }
    
    
}