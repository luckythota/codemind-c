#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c,flag=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
       // printf("%d",a[i]);
        c=0;
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c=c+1;
            }
        }
        //printf("%d",c);
        if(c==0)
        {
            flag=1;
            printf("%d ",a[i]);
            a[i]=0;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}