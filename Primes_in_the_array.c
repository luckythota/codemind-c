#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,m,sum=0,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        count=0;
        m=a[i];
        for(j=1; j<=m; j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            sum++;
        }
    }
    printf("%d",sum);
}
        