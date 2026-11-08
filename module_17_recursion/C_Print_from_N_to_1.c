#include <stdio.h>
void print_n_to_1(int n, int i)
{
    if (i == n +1)
    {
        return;
    }

    print_n_to_1(n, i + 1);
    printf("%d ", i);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    print_n_to_1(n, 2);
    printf("%d",1);
    return 0;
}