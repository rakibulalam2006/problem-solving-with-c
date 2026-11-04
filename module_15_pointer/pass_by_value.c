#include <stdio.h>
void func(int x)
{
    x = 20;
    printf("func function er x er adderss:%p\n", &x);
}

int main()
{
    int x = 10;
    func(x);
    printf("main function er x er adderss:%p\n", &x);
    return 0;
}