#include <stdio.h>
int main()
{
    int t, a, b, c;
    long long int m, mul;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &m);
        scanf("%d %d %d", &a, &b, &c);
        mul = a * b * c;
        long long int num = m / mul;

        if (num * mul == m)
        {
            printf("%lld\n", num);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}