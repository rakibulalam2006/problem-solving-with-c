#include <stdio.h>
int main()
{
    int x = 100;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr;
    ptr = &x;
    *ptr = 200;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n",x);
    return 0;
}