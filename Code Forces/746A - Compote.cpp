#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=a/1;
    e=b/2;
    f=c/4;
    if(d<=e&&d<=f)
    {
        printf("%d\n",d+2*d+4*d);
    }
    else if(e<=d&&e<=f)
    {
        printf("%d\n",e+e*2+e*4);
    }
    else if(f<=d&&f<=e)
    {
        printf("%d\n",f+f*2+f*4);
    }
    return 0;
}
