#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burgger Khabo \n");
    }
    else if (tk >= 50)
    {
        printf("Fuchka Khabo\n");
    }
    else if (tk >=20)
    {
        printf("chips kahbo");
    }
    
    else
    {
        printf("kicho khabona\n");
    }

    return 0;
}