#include <stdio.h>
#include <math.h>
int my_abs(int n)
{
    int ans = abs(n);
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = my_abs(n);
    printf("%d", ans);
    return 0;
}