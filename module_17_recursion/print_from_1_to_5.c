#include <stdio.h>
void hello(int i)
{
    if (i == 101)
    {
        return;
    }
    if (i % 9 == 0)
    {
        printf("%d\n", i);
    }

    hello(i + 1);
}
int main()
{
    int i = 1;
    hello(i);
    return 0;
}