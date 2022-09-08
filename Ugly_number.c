#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    while(n%2==0)
    {
        n=n/2;
    }
    if(n==1)
    {
        flag=1;
    }
    while(n%3==0)
    {
        n=n/3;
    }
    if(n==1)
    {
        flag=1;
    }
    while(n%5==0)
    {
        n=n/5;
    }
    if(n==1)
    {
        flag=1;
    }
    if(flag==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}