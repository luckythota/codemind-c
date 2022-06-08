#include<stdio.h>
int main()
{
    int n,a,b,i,j,r,count;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d
",&a,&b);
        count=0;
        for(j=a; j<=b; j++)
        {
           if(j!=0)
           {
               r=j%10;
           }
           if(r==2 || r==3 || r==9)
           {
               count=count+1;
           }
        }
        printf("%d
",count);
    }
    
}