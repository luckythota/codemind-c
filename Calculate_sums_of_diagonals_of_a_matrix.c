#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n],i,j,pd=0,sd=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                pd=pd+mat[i][j];
            }
            if(i==n-j-1)
            {
                sd=sd+mat[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",pd);
    printf("Secondary Diagonal:%d",sd);
}