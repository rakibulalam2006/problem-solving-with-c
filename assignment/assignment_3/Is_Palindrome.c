#include <stdio.h>
#include<string.h>

int is_palindrome(char *s)
{
    int flag = 1;
    int len = strlen(s);
    // printf("%d",len);
    for (int i = 0,j = len-1; i < j; i++,j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
        
    }
    // printf("%d",flag);
    return flag;
}
int main()
{
    char s[1005];
    scanf("%s", &s);
    int result = is_palindrome(&s);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}