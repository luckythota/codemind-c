#include<stdio.h>
int main()
{
    int n,r,s,sum=0,v,su=0,re;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    v=sum*sum;
    while(v!=0)
    {
        re=v%10;
        su=su*10+re;
        v=v/10;
    }
    if(s==su)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}