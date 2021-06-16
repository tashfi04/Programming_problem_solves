#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n, a, total = 0, i, opt = 0;

     cin>>n;
     for(i=0; i<n; i++)
     {
         cin>>a;
         total += a;
     }
     n++;   //adding Dima to total number of people
     for(i=1; i<=5; i++)
     {
         if(((total+i) % n) != 1)
         {
             opt++;
         }
     }
     cout<<opt<<endl;

    return 0;
}
