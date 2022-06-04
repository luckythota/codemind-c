#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n],i,j,sum=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int column=0;
    for(j=0; j<n; j++)
    {
        int sum=0;
        for(i=0; i<m; i++)
        {
            sum=sum+mat[i][j];
        }
        printf("%d ",sum);
    }
}