#include<stdio.h>
#include <stdlib.h>


void matriz (int m, int n, int mat[m][n])//cria uma matriz definida pelo usuário
{
    int i, j;
    for (i=0; i < m; i++)
    {    
        for (j=0; j < n; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
}
void vetor (int n, int vet[n][1])//cria um vetor definido pelo usuário
{
    int i;
    for (i=0; i < n; i++)
    {
        printf("[%d]: ", i);
        scanf("%f", &vet[0][i]);
    }
}
main()
{
    int m, n, i, j, g;
    printf("Digite o valor de m (linhas) e n (colunas)");
    scanf("%d %d", &m, &n);
    float mat[m][n], vet[n][1], matrizresultado[2][1];
    matriz (m,n,mat);
    vetor (n, vet);
    //calculo do produto
    for (i=0; i<m; i++)
    {
        for (j=0; j<1; j++)
        {
            for (g=0; g<n;g++)
            {
                matrizresultado[i][j]+= mat[i][g] * vet[g][j];
            }
        }
    }
    //printar o resultado na tela
    printf("a matriz resultante Ã©: \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<1; j++)
        {
            printf("%f", matrizresultado[i][j]);
        }
    }
}