#include<stdio.h>
int main()
{
    int n,i,j,count,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(i>=1)
            {
                count=0;
                for(j=2; j<i; j++)
                {
                    if(i%j==0)
                    {
                        count++;
                    }
                }
                if(count!=0)
                {
                    sum++;
                }
            }
        }
    }
    printf("%d",sum+1);
}
