#include<stdio.h>
int main()
{
    int n,j;
    int i;
    scanf("%d",&n);
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ",i+65);
        }
        printf("
");
    }
}