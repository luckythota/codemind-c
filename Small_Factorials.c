#include<stdio.h>
int main()
{
    int n,a,r,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        r=1;
        for(j=1; j<=a; j++)
        {
            r=r*j;
        }
        printf("%d
",r);
    }
}
