#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area,e;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area=s*(s-a)*(s-b)*(s-c);
    e=sqrt(area);
    printf("%.2f",e);
    
}