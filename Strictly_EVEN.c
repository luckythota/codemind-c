#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2!=0 && a[i]%2==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}