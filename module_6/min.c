#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val < min)
        {
            min = val;
        }
    }
    printf("%d", min);
    return 0;
}