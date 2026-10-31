#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt_2 = 0;
    int cnt_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0 && a[i]%3 == 0)
        {
            cnt_2++;
        }
        else if (a[i]%2 == 0)
        {
            cnt_2++;
        }
        else if(a[i]%3 == 0){
            cnt_3++;
        }
    }
    printf("%d %d",cnt_2,cnt_3);
    return 0;
}