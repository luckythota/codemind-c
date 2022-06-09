#include<stdio.h>
int main()
{
    int n,r,s,sum=0,sum1=0,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
       if(n>1)
       {
          r=n%10;
          n=n/10;
          sum=sum+r;
       }
      if(sum>=10)
      {
         s=sum%10;
         sum=sum/10;
         sum=sum+s;
      }
    }
    printf("%d",sum);
}