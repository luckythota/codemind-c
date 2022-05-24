#include<stdio.h>
int main()
{
    int n,m,s,r,temp,flag=0;
    scanf("%d",&n);
    m=n;
    s=n*n;
    temp=10;
    while(n>0)
    {
        r=s%temp;
        if(m==r)
        {
            flag=1;
            break;
        }
        n=n/10;
        temp=temp*10;
    }
    if(flag==1)
    {
        printf("Automorphic Number");
        
    }
    else
    {
        printf("Not an Automorphic Number");
        
    }
}