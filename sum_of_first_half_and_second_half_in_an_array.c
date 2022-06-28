#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n/2; i++)
    {
        sum=sum+a[i];
    }
    for(i=n/2; i<n; i++)
    {
        sum1=sum1+a[i];
    }
    printf("%d
%d",sum,sum1);
}