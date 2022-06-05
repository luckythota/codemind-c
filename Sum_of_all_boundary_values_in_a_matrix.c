#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],i,j,sum=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0 || i==m-1 || j==0 || j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}