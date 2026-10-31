#include <stdio.h>
int main()
{
    int t, m1, m2, d;
    scanf("%d", &t);
for (int i = 0; i < t; i++)
{
    scanf("%d %d %d", &m1, &m2, &d);
    int totalDays = (m1*d) / (m1+m2);
    int netDays = d - totalDays;
    printf("%d\n",netDays);
}
    return 0;
}