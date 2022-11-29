#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c,flag=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
       for(j=0; j<n; j++)
       {
           if(a[j]<a[i] && j!=i)
           {
               c++;
           }
       }
       printf("%d ",c);
    }
}