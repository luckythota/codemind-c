#include<stdio.h>
int main()
{
    signed int n,r,m,sum=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}