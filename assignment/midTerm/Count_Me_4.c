#include<stdio.h>
#include<string.h>
int main(){
    char str[10001];
    scanf("%s",&str);
    int cnt_letter[123] = {0};
    int len = strlen(str);
    int i;
    for ( i = 0; i < len; i++)
    {
        char ch = str[i];
        cnt_letter[ch]++;
    }
    for ( i = 'a'; i <= 'z'; i++)
    {
        if (cnt_letter[i] > 0)
        {
           printf("%c - %d\n",i,cnt_letter[i]);
        }
        
    }
    return 0;
}