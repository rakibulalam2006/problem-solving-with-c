#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,20,stdin);
    // int sz = strlen(s);
    // printf("%d",strlen(s));
    int sl = strlen(s);
    printf("%d",sl);
    return 0;
}