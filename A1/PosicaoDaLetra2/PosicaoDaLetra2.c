#include <stdio.h>
int main()
{
    char letra;
    
    scanf("%c",&letra);
    
    if(letra >= 65 && letra <= 90) {
        
        printf("%d\n", (letra-64));
        
    }
    
    else if ( letra >= 97 && letra <= 122) {
        
        printf("%d\n", (letra-96));
    }
    
  
    return 0;
}
