#include<stdio.h>
int main()
{
    char str[1000],c;
    int i,count=0,flag=0;
    scanf("%[^
]s",str);
    scanf("
%c",&c);
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]==c)
        {
            count++;
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }
    
}