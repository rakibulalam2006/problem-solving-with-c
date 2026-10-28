#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a = x / 1000;
    // if (a % 2 == 0)
    // {
    //     printf("EVEN");
    // }
    // else{
    //     printf("ODD");
    // }

    int last_digit = x%1000;
    printf("%d",last_digit);

    return 0;
}