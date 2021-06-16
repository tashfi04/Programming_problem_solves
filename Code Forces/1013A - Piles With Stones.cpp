#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,x,day_1=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>x;
       day_1=day_1+x;
   }
   for(i=1;i<=n;i++)
   {
       cin>>x;
       day_1=day_1-x;
   }
   if(day_1>=0)
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;

    return 0;
}
