#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("Array er 0th index er adderss: %p\n", &a[0]);
    // printf("%d\n",*a);
    *a = 100;
    *(a+1) = 200;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}