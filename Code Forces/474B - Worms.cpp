#include <bits/stdc++.h>

using namespace std;

void binarysearch(int arr[], int size_, int num)
{
    int B=1, E=size_, M=(B+E)/2;
    bool found=false;

    while(B<=E)
    {
        if(num==arr[M])
        {
            found=true;
            //printf("%d found at index %d\n", num, M);
            break;
        }
        else if(num>arr[M])
        {
            if(num<=arr[M+1])
            {
                found=true;
                M++;
                break;
            }
            B=M+1;
        }
        else
        {
            if(num>arr[M-1])
            {
                found=true;
                break;
            }
            E=M-1;
        }
        M=(B+E)/2;
    }
    if(found)
        cout<<M<<endl;
    //if(!found)
        //printf("%d not found!\n", num);

}

int main()
{
    int n, i;
    cin>>n;

    int arr[n+3]={0};
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }
    int m, q;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>q;
        binarysearch(arr, n, q);
        /*for(j=1; j<=n; j++)
        {
            if(q<=arr[j])
            {
                cout<<j<<endl;
                break;
            }
        }*/
    }

    return 0;
}

//2 9 12 16 25

