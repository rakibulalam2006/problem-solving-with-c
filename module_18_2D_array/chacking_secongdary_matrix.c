#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_daigonal = true;
    if (r == c) // square matrix
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // if (i + j == r - 1)
                // {
                //     /* we are now at diagonal */
                // }
                if (i + j != r - 1)
                {
                    if (a[i][j] != 0)
                    {
                        is_daigonal = false;
                        printf("This is not a secondary diagonal matrix");
                    }
                }
            }
        }
        if (is_daigonal == true)
        {
            printf("This is a secondary diagonal matrix");
        }
    }
    else
    {
        printf("This is not a secondary diagonal matrix");
    }
    return 0;
}