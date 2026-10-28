#include <stdio.h>
int main()
{
    char num;
    scanf("%c", &num);
    if (num >= 97)
    {
        printf("%c", num - 32);
    }

    else if (num >= 65)
    {
        printf("%c", num + 32);
    }

    // printf("%d",num);
    return 0;
}
