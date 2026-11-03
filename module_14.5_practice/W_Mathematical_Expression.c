#include<stdio.h>
int main(){
    int a,b,c,ans;
    char s,eq;
    scanf("%d %c %d %c %d",&a,&s,&b,&eq,&c);
    if(s == '+'){
       ans = a+b;
    }
    else if(s == '-'){
       ans = a-b;
    }
    else if(s == '*'){
       ans = a*b;
    }
    if (ans == c)
    {
        printf("Yes");
    }
    else{
        printf("%d",ans);
    }
    return 0;
}