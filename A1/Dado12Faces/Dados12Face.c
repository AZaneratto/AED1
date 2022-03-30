#include <stdio.h>
#include <stdlib.h>



int main() {
    

    int sheldon = 0;
    int leonard = 0;
    int s,n;
    int i = 1;
    int k = 2;
    scanf("%d", &n);
    
       while(((sheldon<n) && (leonard<n))) {
            
           
                scanf("%d", &s);
                
                if (i%2 != 0) {
                
                    if ((s%2 == 0 && sheldon%2 == 0)||(s%2 != 0 && sheldon%2 !=0 )) {
                    
                        sheldon ++;
                        
                        
                    }
                    
                    else {
                        
                        sheldon --;
                        if(sheldon<0){
                            
                            sheldon = 0;
                        }
                        
                        
                    }
                }
                
                else {
                    
                    if ((s%2 == 0 && leonard%2 == 0)|| (s%2 != 0 && leonard%2 != 0)) {
                        
                        leonard ++;
                        ;
                       
                    }
                    else {
                        
                        leonard --;
                        if(leonard<0) {
                            leonard =0;
                        }
                        
                        
                    }   
                }
           
               
            }
           
        
        
        
    
    if ( leonard > sheldon ){
        
        printf("Leonard\n");
    }
    else {
        
        printf("Sheldon\n");
    }
   return 0; 
}