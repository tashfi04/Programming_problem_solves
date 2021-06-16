#include<bits/stdc++.h>

using namespace std;

int calculate_cells(int n)
{
    int sum;

    if(n == 1)
        return 1;
    else
         sum = calculate_cells(n-1);

    return sum + 2 * (2*(n-1) - 1) + 2;
}

int main()
{
    int n;

    cin>>n;

    cout<<calculate_cells(n)<<endl;

    return 0;
}


// 1, 1+4, (1+4)+8, (1+4+8)+12


//1, 2, 3
//1, 3, 5
