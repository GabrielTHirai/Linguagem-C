#include <stdio.h>
#define m 3
#define n 4

main ()
{
    int matriz[m][n];
    int i,j,contador,ntotal;
    float resultado;

    for (i=0; (i<m); i++)
    {
        for (j=0; (j<n); j++)
        {
           printf("[%d][%d]: ", i,j);
           scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    for (i=0; (i<m); i++)
    {
        for (j=0; (j<n); j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
        
    for (i=0; (i<m); i++)
    {
        for(j=0; (j<n); j++)
        {
            if (matriz[i][j] == 0)
            contador += 1;
        }
    }
    ntotal = (m*n);

    resultado = (float)contador/ntotal;
    printf("Esparsidade: %.2f",resultado);
}