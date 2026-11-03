#include <stdio.h>
#include <limits.h>
int mn = INT_MAX;
int mx = INT_MIN;
int min(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
        }
    }
    return mn;
}
int max(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    return mx;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int minNum = min(n, a);
    int maxNum = max(n, a);
    printf("%d %d",minNum,maxNum);
    return 0;
}