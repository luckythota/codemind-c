#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,v,c,flag=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    for(i=0; i<n; i++)
    {
        if(a[i]==v)
        {
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
        
}