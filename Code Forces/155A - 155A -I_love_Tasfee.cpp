#include<stdio.h>
int main()
{
    int n,a,b,i,x=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        if(i==1)
        {
            a=p;
            b=p;
        }
        if(p>a)
        {
            x++;
            a=p;
        }
        else if(p<b)
        {
            x++;
            b=p;
        }
    }
    printf("%d\n",x);

    return 0;
}
