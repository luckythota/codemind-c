#include<stdio.h>
int main()
{
    int n,i;
    float sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=float(1)/float(i)+(sum);
    }
    printf("%.2f",sum);
}