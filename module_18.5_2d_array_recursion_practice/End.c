// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("%d %d ", a[i], a[j]);
        }
        if (a[i] == a[j])
        {
            printf("%d", a[i]);
        }
    }

    return 0;
}