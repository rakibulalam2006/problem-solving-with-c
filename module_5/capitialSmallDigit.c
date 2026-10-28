#include <stdio.h>
int main()
{
    int n;
    scanf("%c", &n);
    if (n >= 'A' && n <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if (n >= 'a' && n <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else if (n >= '0' && n <= '9')
    {
        printf("IS DIGIT");
    }

    return 0;
}