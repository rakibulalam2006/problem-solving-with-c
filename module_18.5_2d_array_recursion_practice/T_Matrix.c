// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int pri = 0, sec = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri = pri + a[i][j];
            }
            if (i + j == n - 1)
            {
                sec += a[i][j];
            }
        }
    }
    int sum = abs(pri - sec);
    printf("%d", sum);

    return 0;
}