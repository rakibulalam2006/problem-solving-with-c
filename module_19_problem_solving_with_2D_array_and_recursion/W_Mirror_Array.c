// problem Lonk: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/**
 * input
 *  3 3
    2 3 5
    7 9 20
    35 1 12

    output
    5 3 2
    20 9 7
    12 1 35
 */