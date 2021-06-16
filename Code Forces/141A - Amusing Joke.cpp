#include<stdio.h>
#include<string.h>
int main()
{
    char a[202],b[101],c[101];
    int i,j,sum=0;
    scanf("%s %s %s",a,b,c);
    strcat(a,b);
    if(strlen(a)!=strlen(c))
        printf("NO\n");
    else
    {
        for(i=0;i<strlen(c);i++)
        {
            for(j=0;j<strlen(c);j++)
            {
                if(a[i]==c[j])
                {
                    sum++;
                    c[j]=1;
                    break;
                }
            }
        }
        if(sum==strlen(c))
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
