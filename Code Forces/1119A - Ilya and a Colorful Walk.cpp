#include <bits/stdc++.h>
//#include <unordered_set>
using namespace std;

int main()
{
    int n, i, max_;
    cin>>n;

    int arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(i=1; arr[i]==arr[n]; i++);

    max_ = n - i;

    for(i=n; arr[i]==arr[1]; i--);

    if(i>max_)
        max_ = i - 1;

    cout<<max_<<endl;

    return 0;
}
