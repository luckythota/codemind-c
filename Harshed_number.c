#include<stdio.h>
int main()
{
    int n,r,m,sum=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    if(m%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}