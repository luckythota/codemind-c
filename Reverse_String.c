#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,j,len=0,temp;
    for(i=0; s[i]!=NULL; i++)
    {
        len++;
    }
    i=0;
    j=len-1;
    while(i<j)
    {
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        i++;
        j--;
    }
    printf("%s",s);
    return 0;
}