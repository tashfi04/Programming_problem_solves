#include<stdio.h>
int main()
{
    long long k,n,a;

    while(scanf("%I64d%I64d",&n,&k)==2)
    {
        if(n%2==0)
        {
            if(k<=(n/2))
            {
                a=1+(k-1)*2;
                printf("%I64d\n",a);
            }
            else if(k>n/2)
            {
                a=2+(k-(n/2)-1)*2;
                printf("%I64d\n",a);
            }
        }
        else if(n%2!=0)
        {
            if(k<=(n+1)/2)
            {
                a=1+(k-1)*2;
                printf("%I64d\n",a);
            }
            else if(k>(n+1)/2)
            {
                a=2+(k-((n+1)/2)-1)*2;
                printf("%I64d\n",a);
            }
        }
    }
    return 0;
}
