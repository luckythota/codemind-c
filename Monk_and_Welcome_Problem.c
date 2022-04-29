#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],i,j,k;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
      {
          if(i==j)
          { 
            c[k]=a[i]+b[j];
          }
      }
      printf("%d ",c[k]);
    }
}