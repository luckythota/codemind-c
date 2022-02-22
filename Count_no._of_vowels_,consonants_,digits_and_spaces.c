#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i, cc=0,vc=0,dc=0,ws=0;
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]==32)
        {
            ws++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            dc++;
        }
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            vc++;
        }
        else if(s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u' || s[i]!='A' || s[i]!='E' || s[i]!='I' || s[i]!='O' || s[i]!='U')
        {
            cc++;
        }
    }
    printf("Vowels: %d
",vc);
    printf("Consonants: %d
",cc);
    printf("Digits: %d
",dc);
    printf("White spaces: %d
",ws);
}