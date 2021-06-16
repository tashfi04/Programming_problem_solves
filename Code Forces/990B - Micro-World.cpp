#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i, j, a, opt, dpl;
    vector< int > bct;
    cin >> n >> k;

    for(i=0; i<n; i++)
    {
        cin >> a;
        bct.push_back(a);
    }
    sort(bct.begin(), bct.end());
    opt = 0;
    dpl = 0;

    for(i=1; i<n; i++)
    {
        if(bct[i]==bct[i-1])
        {
            dpl++;
            //cout<<"="<<i<<endl;
        }
        else if(bct[i-1]+k>=bct[i])
        {
            opt=opt+dpl+1;
            //cout<<"dpl "<<dpl<<endl;
            dpl=0;
            //cout<<"+"<<i<<endl;
        }
        else
            dpl=0;
        //cout<<opt<<endl;
    }

    cout << n-opt << endl;
    //for(i=0; i<n; i++)
    //   cout << bct[i] << endl;

    return 0;
}


//102 101 101 55 54 53 42
//42 53 54 55 101 101 102





