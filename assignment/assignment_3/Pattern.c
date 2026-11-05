#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space = n-1;
    int star = 1;
    for (int i = 1; i <= (2*n)-1; i++)
    {
        for(int j = 1;j<=space;j++){
            printf(" ");
        }
        for(int j = 1;j<=star;j++){
            if (i%2 == 0)
            {
                printf("-");
            }else{
                printf("#");
            }
            
        }

        if (i <= n-1)
        {
           space--;
           star +=2;
        }else{
            space++;
            star -= 2;
        }
        
        printf("\n");
    }
    
    return 0;
}

/**
 * output
 *    #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      #
 */