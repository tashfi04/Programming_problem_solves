#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int i, arr[n+1], counter[2001], a = 0, x = n;
        memset(counter, 0, sizeof(counter));
        //cout<<counter[1]<<endl;
        //for(i=1; i<=n; i++)
        //    cout<<counter[i]<<"^^^^"<<endl;
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            counter[arr[i]]++;
            //cout<<"1st loop"<<endl;
        }
        //for(i=1; i<=n; i++)
        //    cout<<counter[arr[i]]<<"^^^^"<<endl;
        for(i=1; i<=2000; i++)
        {
            counter[i] = x-counter[i];
            x = counter[i];
            //cout<<"2nd loop"<<endl;
        }
        for(i=1; i<=n; i++)
        {
            if(i<n)
                cout<<counter[arr[i]]+1<<" ";
            else
                cout<<counter[arr[i]]+1<<endl;
            //cout<<"3rd loop"<<endl;
        }
    }

    return 0;
}
//2 0 1
