#include <stdio.h>
long long int sum = 0;
int summation(long long int a[], long long int n,int i)
{
    if (i == n)
    {
        return;
    }

    sum += a[i];
    summation(a, n, i + 1);
    return sum;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int result = summation(a, n, 0);
    printf("%lld", result);
    return 0;
}