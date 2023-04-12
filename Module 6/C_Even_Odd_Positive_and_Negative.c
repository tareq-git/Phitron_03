#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d\n",&n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d ",&x);
        if (x%2==0)
        {
            printf("Even :%d\n",x);
        }
        
        else if (x%2==0)
        {
            printf("Odd :%d\n",x);
        }
        else if (x>0)
        {
            printf("Positive :%d\n",x);
        }
        else if (x<=0) 
        {
            printf("Negative :%d\n",x);
        }
        

    }
   
    return 0;
}