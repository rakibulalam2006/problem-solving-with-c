#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int str = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++) //up
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < str; j++)
        {
            printf("*");
        }
        printf("\n");
        str +=2;
        space--;
    }
    

    space = 0;
    str = 2*n-1;
    for (int i = 0; i < n; i++) //up
    {
        for (int j = space; j >0; j--)
        {
            printf(" ");
        }
        for (int j = str; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
        str -=2;
        space++;
    }
    

    return 0;
}