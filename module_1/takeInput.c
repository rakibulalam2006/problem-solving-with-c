// #include<stdio.h>
// int main(){
//     int a;
//     float f;
//     char c; 
//     scanf("%d",&a);
//     scanf("%f",&f);
//     scanf("%c",&c);
//     printf("%d %f %c",a,f,c);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a;
    float f;
    char c;
    scanf("%d %f %c",&a, &f, &c);
    printf("%d %f %c", a, f, c);
    return 0;
}