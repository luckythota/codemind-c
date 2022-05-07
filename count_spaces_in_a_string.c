#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^'
%*]s",str);
    int i,count=0;
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]==32)
        {
            count++;
        }
    }
    printf("%d",count);
}