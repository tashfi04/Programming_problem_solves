#include<stdio.h>
int main()
{
    int n,l,r,x=0,y=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&l,&r);
        if(l==1)
            x++;
        if(r==1)
            y++;
    }
    if(n-x<x)
        x=n-x;
    if(n-y<y)
        y=n-y;
    printf("%d",x+y);

    return 0;
}
