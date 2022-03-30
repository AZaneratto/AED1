#include <stdio.h>
#include <stdlib.h>

int main()

{
    int *v;
    int  i, n, aux;
    while (scanf("%d", &n) != EOF)
    {
        aux = 1;
        v = (int *)malloc(n*sizeof(int));
        for (i = 0; i < n; i++)

        {
            scanf("%d", &v[i]);
            if (v[i-1] > v[i])

            {
                aux = 0;
            }
        }


        if ( aux == 0)

        {
                printf("N\n");
        }

        else
        {
            printf("S\n");
        }

        free(v);
    }
    return 0;

}

















