#include <stdio.h>
#include<stdbool.h>
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
    if (r == c)  // square matrix
    { 
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j) 
                {
                    /* we are now at diagonal */
                }else{
                    if (a[i][j] != 0)
                    {
                        is_daigonal = false;
                        printf("This is not a primary diagonal matrix");
                    }   
                }   
            }
        }
        if (is_daigonal == true)
        {
            printf("This is a primary diagonal matrix");
        } 
    }
    else
    {
        printf("This is not a primary diagonal matrix");
    }
    return 0;
}