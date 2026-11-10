// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int cnt = 0;
    bool opteration = true;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
            }
            else
            {
                opteration = false;
                break;
            }
        }
        if (opteration == true)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}