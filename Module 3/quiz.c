#include <stdio.h>
int main()
{
     int i,n;
    
        scanf("%d",&n);
        
        for(i=1;i<=n;i=i+1)
        {
            if (n%5)
            {
                printf("%d Yes\n",i);
            }
            else
            {
                printf("%d No\n",i);
            }
            
            
        }
    return 0;
}