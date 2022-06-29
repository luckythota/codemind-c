#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    scanf("%d",&m);
    int a[m],i,j,sum=0,sum1=0,c=0;
    for(i=0; i<m; i++)
    {
            scanf("%d",&a[i]);
    }
    for(i=0; i<m/2; i++)
    {    
                sum=sum+a[i];
    }
    for(i=m/2; i<m; i++)
    {
                sum1=sum1+a[i];
    }
    c=abs(sum-sum1);
    printf("%d",c);
}