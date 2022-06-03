#include<stdio.h>
int main()
{
    int a[3],b[3],i,c=0,d=0;
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("%d",&b[i]);
    }
    if(a[0]>b[0])
    {
        c=c+1;
    }
    else if(a[0]<b[0])
    {
        d=d+1;
    }
    if(a[1]>b[1])
    {
        c=c+1;
    }
    else if(a[1]<b[1])
    {
        d=d+1;
    }
    if(a[2]>b[2])
    {
        c=c+1;
    }
    else if(a[2]<b[2])
    {
        d=d+1;
    }
    printf("%d %d",c,d);
}