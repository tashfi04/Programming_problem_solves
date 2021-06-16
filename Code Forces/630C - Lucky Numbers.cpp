#include <bits/stdc++.h>

int main()
{
    int i;
    unsigned long long arr[56], increment = 2;
    arr[0] = 0;
    for(i=1; i<=55; i++)
    {
        arr[i] = arr[i-1] + increment;
        increment*=2;
    }

    int n;
    while(std::cin>>n)
    {
        std::cout<<arr[n]<<std::endl;
    }

    return 0;
}
