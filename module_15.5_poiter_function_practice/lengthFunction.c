#include <stdio.h>
int my_len(char s[])
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char s[500];
    scanf("%s", &s);
    int result = my_len(s);
    printf("%d", result);
    return 0;
}