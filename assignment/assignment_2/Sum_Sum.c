#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    int positiveSum = 0;
    int negativeSum = 0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
           positiveSum += a[i];
        }
        if (a[i] < 0)
        {
           negativeSum += a[i];
        }
        
    }
    printf("%d %d",positiveSum,negativeSum);
    return 0;
}