#include<stdio.h>
int main()
{
    int n,r,sum=0,mul=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        mul=mul*r;
        res=mul-sum;
    }
    printf("%d",res);
}