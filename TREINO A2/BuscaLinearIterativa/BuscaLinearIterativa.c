#include <stdio.h>
#include <stdlib.h>


int buscaLinear( int *, int, int);



int main() {
    int n,i,j,m,procurado;
    scanf("%d",&n);
    int *v;
    v = (int*)malloc(n*sizeof(int*));
    for (i=0; i<n; i++) {

        scanf("%d", &v[i]);

    }

    scanf("%d",&m);

    for (j=0; j<m; j++) {
      scanf("%d",&procurado);
      if (buscaLinear(v,n,procurado)==0)
      {
          printf("ACHEI\n");
      }

      else
      {
          printf("NAO ACHEI\n");
      }

    }



    return 0;

}

int buscaLinear(int *k, int s, int x)
{
    int i;
    for(i=0; i<s; i++) {

        if(k[i]== x)
        {
            return 0;
        }
    }

    return -1;




}