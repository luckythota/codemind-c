#include<stdio.h>
int main()
{
    int t,n,m,i,r,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        m=n;
        sum=0;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            sum=sum*10+r;
        }
        if(m==sum)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}