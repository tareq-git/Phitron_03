include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);

    if (n>1)
        {
            for (i=1; i <= n; i=i+1)
                    {        
                        if (i%2==0)
                        {
                            printf("%d\n",i);
                        }       
                    }
        }
    else
    {
        printf("-1\n");
    }

    return 0;
}
