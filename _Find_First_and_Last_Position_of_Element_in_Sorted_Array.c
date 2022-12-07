#include<stdio.h>
int main()
{
    int n,v,k,f=-1,l=-1,m;
    scanf("%d",&n);
    int a[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    for(i=0; i<n; i++)
    {
        if(v!=a[i])
        {
            continue;
        }
        if(f==-1)
        {
            f=i;
        }
        l=i;
    }
    if(f!=-1)
    {
        printf("%d %d",f,l);
    }
    else
    {
        printf("-1 -1");
    }
}