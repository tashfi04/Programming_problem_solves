#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n, q, a, i, j, max_index = 0, max_num = 0;
    unsigned long long m;
    deque <unsigned long long> dq;
    vector < vector <unsigned long long> > v;

    cin>>n>>q;

    for(i=0; i<n; i++)
    {
        cin>>a;
        dq.push_back(a);
        if(a > max_num)
        {
            max_num = a;
            max_index = i;
        }
    }
    max_index++;

    v.resize(max_index);

    for(i=0; i<2; i++)
        v[0].push_back(dq[i]);

    for(i=1; i<max_index; i++)
    {
        unsigned long long dq0 = dq[0];
        unsigned long long dq1 = dq[1];
        if(dq0 > dq1)
        {
            dq.pop_front();
            dq.pop_front();
            dq.push_front(dq0);
            dq.push_back(dq1);
        }
        else
        {
            dq.pop_front();
            dq.push_back(dq0);
        }

        for(j=0; j<2; j++)
        {
            v[i].push_back(dq[j]);
        }
    }
    i--;
    for(j=2; j<n; j++)
        v[i].push_back(dq[j]);

    for(i=0; i<q; i++)
    {
        cin>>m;
        if(m <= max_index)
            cout<<v[m - 1][0]<<" "<<v[m - 1][1]<<endl;
        else
        {
            unsigned long long x = m - max_index;
            x = x % (n-1);
            cout<<v[max_index - 1][0]<<" "<<v[max_index - 1][x+1]<<endl;
        }
    }

    return 0;
}
