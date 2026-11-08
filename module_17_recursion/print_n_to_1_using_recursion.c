#include <stdio.h>
void print(int n)
{
    if (n == 0)         //end condition
    {
        return;
    }

    printf("%d\n", n);
    print(n - 1);       // increment/decrement
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);       // initialization
    return 0;
}