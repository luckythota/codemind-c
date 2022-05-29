#include<stdio.h>
int main()
{
    char str[100];
    int i,j,temp,len;
    len=0;
    scanf("%[^'
']s",str);
    for(i=0; str[i]!=NULL; i++)
    {
        len++;
    }
    i=0;
    j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("%s",str);
}
    