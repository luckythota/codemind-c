#include<stdio.h>
int main()
{
    int n,temp,r,i,fact,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r; i>=1; i--)
       {
          fact=fact*i;
       }
       sum=sum+fact;
       n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}