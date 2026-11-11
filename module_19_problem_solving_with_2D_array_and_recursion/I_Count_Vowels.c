// problem Link : https : // codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <stdio.h>
int countVowels(char s[], int i)
{

    if (s[i] == '\0')
    {
        return 0;
    }
    int cnt = countVowels(s, i + 1);
    if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);

    int ans = countVowels(s, 0);

    printf("%d", ans);
    return 0;
}