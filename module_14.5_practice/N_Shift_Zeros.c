#include <stdio.h>
void shifting(int n,int a[])
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == 0 && a[j] != 0)
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        printf("%d ", a[i]);
    }
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
    shifting(n,a);
    return 0;
}