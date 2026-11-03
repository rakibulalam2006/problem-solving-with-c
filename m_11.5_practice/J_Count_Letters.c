#include<stdio.h>
#include<string.h>
int main(){
    char s[10000];
    scanf("%s",&s);
    char fre[123] = {0};
    int len = strlen(s);
    
    for (int i = 0; i < len; i++)
    {
        char val = s[i];
        fre[val]++; 
    }
    for (int i ='a' ; i < 'z'; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n",i,fre[i]);
        }
        
    }
    
    return 0;
}