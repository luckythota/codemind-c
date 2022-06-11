#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n],i,r,count=0,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        count=0;
        if(a[i]==0)
        {
            count++;
        }
        while(a[i])
        {
            r=a[i]%10;
            count++;
            a[i]=a[i]/10;
        }
        if(count==k)
        {
            sum++;
        }
    }
    printf("%d",sum);
}