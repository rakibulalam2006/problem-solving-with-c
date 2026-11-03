#include<stdio.h>
void func(int n,int a[]){
    for (int i = 0; i < n;i++)
    {
        printf("%d",a[i]);
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    func(n,a);
    return 0;
}