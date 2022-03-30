#include <stdio.h>


void divResto(int, int, int*, int*);


int  main()
{
    int a,b,divisao,resto;
    scanf("%d %d",&a,&b);
    
    
    
    divResto(a,b, &divisao,&resto);
    
    printf("%d %d \n" , divisao, resto);
    
    return 0;
    
}

void divResto( int a, int b, int *pd, int *pr) 

{
    
    *pd = a / b;
    *pr = a % b;
    
}






