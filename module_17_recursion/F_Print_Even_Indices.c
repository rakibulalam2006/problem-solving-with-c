// problem: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <stdio.h>
void even_index(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    even_index(a, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    even_index(a, n, 0);
    return 0;
}

/**
 *  input
 *  4
    1 4 2 7
    output
    2 1
 */