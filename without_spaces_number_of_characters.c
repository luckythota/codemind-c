#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^'
]c",str);
    int i,count=0,count2=0,dif;
    for(i=0; str[i]!=NULL; i++)
    {
        count++;
        if(str[i]==32)
        {
            count2++;
        }
    }
    dif=count-count2;
    printf("%d",dif);
}