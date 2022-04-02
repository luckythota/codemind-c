#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    scanf("%[^
]s",str);
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]==32)
        {
            count++;
        }
    }
    printf("%d",count+1);
    
}