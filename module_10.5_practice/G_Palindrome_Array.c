#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
         b[i] = a[i];
    }
    
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
        if (b[i] == c[i])
        {
            printf("YES");
            break;
        }else{
            printf("NO");
            break;
        }
        
    }
    
   
   
    
    
    return 0;
}