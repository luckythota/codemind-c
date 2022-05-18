#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+(b*2);
    if(a==0 && b%2==0)
    {
        printf("YES");
    }
    else if(a==0 && b%2!=0)
    {
        printf("NO");
    }
    else if(c%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}