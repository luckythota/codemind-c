#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,r,v,c,d=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        v=a[i];
        c=0;
        while(v!=0)
        {
            r=v%10;
            c+=1;
            v=v/10;
        }
        if(c%2==0)
        {
            d+=1;
        }
    
    }
    printf("%d",d);
}