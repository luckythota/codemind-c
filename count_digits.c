#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,r,count=0;
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
        printf("%d ",count);
    }
}