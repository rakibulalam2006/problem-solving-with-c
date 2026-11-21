#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_daigonal = true;
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == n - 1)
                {

                    if (a[i][j] != 1)
                    {
                        is_daigonal = false;
                        
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_daigonal = false;
                    }
                }
            }
        }
    }
    if (is_daigonal == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}