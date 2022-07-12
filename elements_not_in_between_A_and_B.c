#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,c,flag=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&b,&c);
    for(i=0; i<n; i++)
    {
        if(a[i]>=b && a[i]<=c)
        {
            continue;
        }
        else
        {
            flag=1;
            printf("%d ",a[i]);
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}