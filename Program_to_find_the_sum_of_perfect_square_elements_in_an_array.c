#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<=a[i]; j++)
        {
            if(a[i]==j*j)
            {
                sum=sum+a[i];
            }
        }
    }
    printf("%d",sum);
}