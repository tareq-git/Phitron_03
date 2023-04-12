#include<stdio.h>
int main()
{   
    int taka;

    scanf("%d",&taka);

        if (taka >= 750)
        {
            printf("Gorur mangsho Khabo ");
        }
         else if (taka >= 400)
        {
            printf("Murgir mangsho Khabo ");
        }

        else if (taka >= 300)
        {
            printf("Mach Khabo ");
        }

        else
        {
            printf("Kisui Khabo na");
        }
    
    return 0;
}