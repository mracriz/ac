#include <stdio.h>

void multi_matriz(int m, int a[m][m],int b[m][m])
{
    int c[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            
        }
    }
}

int main()
{
    int m = 830;
    int a[m][m];
    int b[m][m];
    multi_matriz(m, a, b);
}