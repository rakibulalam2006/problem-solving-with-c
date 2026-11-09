// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m, val;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d", &val);

    bool is_have = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (val == a[i][j])
            {
                is_have = false;
            }
        }
    }
    if (is_have == true)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}