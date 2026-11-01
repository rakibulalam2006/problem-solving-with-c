#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                flag = 1;
                printf("YES\n");
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }

    return 0;
}