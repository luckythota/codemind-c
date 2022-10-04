#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],i,j,c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        int sum=0;
        for(j=i; j<n; j++)
        {
            sum=sum+a[j];
            if(sum==k)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}