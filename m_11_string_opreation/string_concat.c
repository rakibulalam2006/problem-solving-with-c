#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    // int len_a = strlen(a);
    // int len_b = strlen(b);

    // for (int i = 0; i <= len_b; i++)
    // {
    //     a[i + len_a] = b[i];
    // }
    
    strcat(a,b); //b+a
    printf("%s\n",a);

    strcat(b,a); //b+a
    printf("%s",b);
    return 0;
}