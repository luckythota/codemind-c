#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,pro=1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        pro=pro*a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",pro/a[i]);
    }
}