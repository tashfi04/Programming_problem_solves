#include<bits/stdc++.h>

using namespace std;

//there are 3 solutions
//2nd and 3rd solutions are given at at the end in comment
//2nd  and 3rd solution are pretty similar

int main()
{
    long long n, m, i, j, max_lang = -1, max_sub = -1, max_index, a;
    map <long long, long long> lang;
    vector <long long> movie_lang;
    vector <long long> movie_sub;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        lang[a]++;
    }

    cin>>m;

    for(i=1; i<=m; i++)
    {
        cin>>a;
        movie_lang.push_back(a);
    }

    for(i=1; i<=m; i++)
    {
        cin>>a;
        movie_sub.push_back(a);
    }

    for(i=0; i<m; i++)
    {
        long long current_lang = lang[movie_lang[i]];

        if(current_lang > max_lang)
        {
            max_lang = current_lang;
            max_sub = lang[movie_sub[i]];
            max_index = i;
        }
        else if(current_lang == max_lang)
        {
            long long current_sub = lang[movie_sub[i]];

            if(current_sub > max_sub)
            {
                max_lang = current_lang;
                max_sub = current_sub;
                max_index = i;
            }
        }
    }

    cout<<max_index+1<<endl;

    return 0;
}

/*
    *****@2dn solution@
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, i, j, max_ = -1, max_index, a;
    map <long long, long long> lang;
    vector <long long> v;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        lang[a]++;
    }
    cin>>m;

    for(i=1; i<=m; i++)
    {
        cin>>a;
        if(lang[a] > max_)
        {
            v.clear();
            v.push_back(i);
            max_ = lang[a];
        }
        else if(lang[a] == max_)
            v.push_back(i);
        else
        {
            if(0 > max_)
            {
                v.clear();
                v.push_back(i);
                max_ = 0;
            }
            else if(0 == max_)
                v.push_back(i);
        }
    }
    if(v.size() == 1)
    {
        while(m--)
            cin>>a;
        cout<<v[0]<<endl;
    }
    else
    {
        max_ = 0;
        max_index = v[0];
        j = 0;
        for(i=1; i<=m; i++)
        {
            cin>>a;
            if(i == v[j])
            {
                if(lang[a] > max_)
                {

                    max_ = lang[a];
                    max_index = i;
                }

                j++;
            }
        }
        cout<<max_index<<endl;
    }

    return 0;
}
*/

/*
    *****@3rd solution@
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, max_ = -1, max_index, a;
    map <int, int> lang;
    map <int, int>::const_iterator it;
    vector <int> v;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        lang[a]++;
    }

    cin>>m;

    for(i=1; i<=m; i++)
    {
        cin>>a;
        it = lang.find(a);
        if(it != lang.end())
        {
            if(it->second > max_)
            {
                v.clear();
                v.push_back(i);
                max_ = it->second;
            }
            else if(it->second == max_)
                v.push_back(i);
        }
        else
        {
            if(0 > max_)
            {
                v.clear();
                v.push_back(i);
                max_ = 0;
            }
            else if(0 == max_)
                v.push_back(i);
        }
    }

    if(v.size() == 1)
    {
        while(m--)
            cin>>a;
        cout<<v[0]<<endl;
    }
    else
    {
        max_ = 0;
        max_index = v[0];
        j = 0;
        for(i=1; i<=m; i++)
        {
            cin>>a;
            if(i == v[j])
            {
                it = lang.find(a);
                if(it != lang.end())
                {
                    if(it->second > max_)
                    {
                        max_ = it->second;
                        max_index = i;
                    }
                }
                j++;
            }
        }
        cout<<max_index<<endl;
    }

    return 0;
}
*/

