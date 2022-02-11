#include<stdio.h>
int main()
{
	int n,r,sum=0;
	scanf("%d",&n);
	int m;
	m=n;
	while(n>0)
	{
	   r=n%10;
	   sum=sum*10+r;
	   n=n/10;	
    }
    if(sum==m)
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}