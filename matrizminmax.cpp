#include <iostream>
#include <locale>
using namespace std;

void minmax(int matriz[10][10], int linha, int coluna)
{
    int max = 0, linhaminmax, colunamin, min = matriz[0][0];
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (matriz[i][j] > max)
            {
                max = matriz[i][j];
                linhaminmax = i;
            }
        }
    }

    for (int i = 0; i < coluna; i++)
    {
        if (matriz[linhaminmax][i] < min)
        {
            min = matriz[linhaminmax][i];
            colunamin = i;
        }
    }
    cout<<"Elemento: %d\nLinha: %d\tColuna: %d", min, linhaminmax, colunamin;
}

int main()
{
    int linha, coluna;
    cin>> &linha, &coluna;
    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin>>"%d">> matriz[i][j];
        }
    }
    minmax(matriz, linha, coluna);
}