#include <bits/stdc++.h>
using namespace std;
int arr[100000+5];
int main()
{
     unsigned long long n, m, opt1 = 0, opt2 = 0;;
     cin>>n;
     //int arr[n];
     int a;
     for(int i=1; i<=n; i++)
     {
         cin>>a;
         arr[a] = i;
     }
     cin>>m;
     //int query[m];
     int query;
     for(int i=0; i<m ;i++)
     {
        //cin>>query[i];
        cin>>query;
        opt1 += arr[query];
        opt2 += n - arr[query] + 1;
     }
     /*for(int i=0; i<m; i++)
     {
         for(int j=0; j<n; j++)
         {
             if(arr[j] == query[i])
             {
                 opt1 += j + 1;
                 opt2 += n - j;
                 break;
             }
         }
     }*/
     cout<<opt1<<" "<<opt2<<endl;

    return 0;
}
