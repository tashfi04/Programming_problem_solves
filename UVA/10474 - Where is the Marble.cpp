#include <bits/stdc++.h>

using namespace std;

//FILE *f;

void linear_search(int arr[], int size_, int num)
{
    int i;

    for(i=0; i<size_; i++)
    {
        if(arr[i]==num)
        {
            printf("%d found at %d\n", num, i+1);
            //fprintf(f, "%d found at %d\n", num, i+1);
            break;
        }
    }
    if(i==size_)
    {
        printf("%d not found\n", num);
        //fprintf(f, "%d not found\n", num);
    }
}

int main()
{
    //f=fopen("untitled2.txt","w");
    int n, q, i, test=1;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)
            break;
        int mrbl[n+2], qry;
        for(i=0; i<n; i++)
            cin>>mrbl[i];
        //for(i=0; i<n; i++)
            //cout<<mrbl[i]<<" "<<endl;
        sort(mrbl, mrbl+n);
        cout<<"CASE# "<<test<<":"<<endl;
        //fprintf(f, "CASE# %d:\n", test);
        test++;
        for(i=0; i<q; i++)
        {
            cin>>qry;
            linear_search(mrbl, n, qry);
        }

    }
    //fclose(f);

    return 0;
}
