#include <stdio.h>
#include <string.h>
int main()
{
    char a[105], b[105];
    scanf("%s\n %s", &a, &b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d %d\n", len_a, len_b);
    printf("%s%s\n", a, b);
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    printf("%s %s\n",a,b);
    return 0;
}