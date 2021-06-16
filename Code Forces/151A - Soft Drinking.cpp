#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,x,y,z;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    x=(k*l)/(n*nl);
    y=(c*d)/n;
    z=p/(n*np);
    if(x<y&&x<z)
        printf("%d",x);
    else if(y<x&&y<z)
        printf("%d",y);
    else
        printf("%d",z);
    return 0;
}
