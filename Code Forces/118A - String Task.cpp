#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[101],s2[201];
    int i,j=0;

    scanf("%s",s1);
    for(i=0;i<strlen(s1);i++)
    {
        s1[i]=tolower(s1[i]);
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='y')
            ;
        else
        {
            s2[j]='.';
            j++;
            s2[j]=s1[i];
            j++;
        }
    }
    s2[j]='\0';
    printf("%s\n",s2);

    return 0;
}
