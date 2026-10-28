#include <stdio.h>
int main()
{
    int a, n, i;
    scanf("%d", &a);
    
    int fact = 1;

    for (i = 1; i <= a; i++)
    {
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("%d", fact);
        printf("\n");
    }

    return 0;
}