#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,r,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        while(a[i]!=0)
        {
            r=a[i]%10;
            a[i]=a[i]/10;
            sum=sum+r;
        }
    }
    printf("%d",sum);
}