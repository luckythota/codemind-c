#include<stdio.h>
main()
{
  int i=1,a,b;  
  scanf("%d%d",&a,&b);
  while(a*i%b!=0)
   {
     i++;
   }
     printf("%d",a*i);
}
 