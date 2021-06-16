#include<stdio.h>
int main()
{
    int n,m,p=0,a;
    scanf("%d %d",&n,&m);
    for(n=n+1;n<=m;n++)
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                p=1;
            }

        }
        if(p==0)
        {
            a=n;
            break;
        }
        else
            p=0;
    }
    if(a==m)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
