#include <stdio.h>
void sub()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a - b;
    printf("%d", ans);
}
int main()
{
    sub();
    return 0;
}