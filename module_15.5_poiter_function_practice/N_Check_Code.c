#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    char s[a + b + 5];
    scanf("%s", &s);
    int flag = true;
    for (int i = 0; i < a + b + 1; i++)
    {
        if (i == a)
        {
           if (s[i] != '-')
           {
            flag = false;
           }
           
        }else{
            if (s[i]<'0' || s[i]> '9')
            {
                flag = false;
            }
            
        }
        
    }
    if (flag == true)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}