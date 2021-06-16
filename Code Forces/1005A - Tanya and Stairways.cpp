#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr, pre, count_, i;

    vector<int> a;

    curr = pre = count_ = 0;

    cin>>n>>pre;

    for(i=1; i<n; i++)
    {
        cin>>curr;
        if(curr == 1)
        {
            a.push_back(pre);
            count_++;
        }
        pre = curr;
    }
    count_++;

    cout<<count_<<endl;

    for(i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<pre<<endl;

    return 0;
}
