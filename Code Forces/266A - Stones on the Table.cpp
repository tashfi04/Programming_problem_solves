#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int n,i,j,a=0;
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1])
        {
            a++;
        }
    }
    printf("%d\n",a);

    return 0;
}
