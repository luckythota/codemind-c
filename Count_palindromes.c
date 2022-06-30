#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,m,r,s=0,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        m=a[i];
        s=0;
        while(m!=0)
        {
            r=m%10;
            s=s*10+r;
            m=m/10;
        }
        if(s==a[i])
        {
            count++;
        }
    }
    printf("%d",count);
}