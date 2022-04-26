#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,es=0,os=0,res;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            es=es+a[i];
        }
        else if(i%2!=0)
        {
            os=os+a[i];
        }
    }
    res=abs(es-os);
    printf("%d",res);
    
}