#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", &s);
    int fre[123] = {0};
    int len = strlen(s);
    int i;
    for (i = 0; i < len; i++)
    {
        int val = s[i];
        fre[val]++;
    }
    
    for (i = 'a'; i <= 'z'; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i, fre[i]);
        }
    }

    return 0;
}