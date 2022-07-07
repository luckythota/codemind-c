#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i,flag=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}