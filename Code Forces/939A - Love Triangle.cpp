#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    int f[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&f[i]);
    }
    if(n==2)
    {
        printf("NO");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        if(f[i]==f[f[i]])
        {
            continue;
        }
        if(f[i]==f[f[f[f[i]]]])
        {
            a=1;
            break;
        }
        else
        {
            a=0;
        }
    }
    if(a==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
