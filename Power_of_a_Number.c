#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,r;
    scanf("%d%d%d",&a,&b,&c);
    s=pow(a,b);
    r=s%c;
    printf("%d",r);
    
}