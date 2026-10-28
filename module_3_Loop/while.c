#include <stdio.h>
int main()
{

    int sum = 0;
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%d", sum);
}