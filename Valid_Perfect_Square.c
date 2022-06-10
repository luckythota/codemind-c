#include<stdio.h>
int main()
{
    int t,m,n,i,j,flag=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        m=n;
        flag=0;
        for(j=1; j<=m; j++)
        {
           if(m==j*j)
           {
               flag=1;
           }
        }
        if(flag==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}