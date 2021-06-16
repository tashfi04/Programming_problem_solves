#include <bits/stdc++.h>

using namespace std;

#define MAX 100000

int arr[MAX], tree[MAX*4];

void CounstructSegmentTree(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = arr[b];
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (b+e)/2;

    CounstructSegmentTree(left, b, mid);
    CounstructSegmentTree(right, mid+1, e);
    tree[node] = tree[right] + tree[left];
}

void update(int node, int b, int e, int i, int data)
{
    if(e<i || b>i)
        return;
    if(i<=b && i>=e)
    {
        tree[node] = data;
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (b+e)/2;

    update(left, b, mid, i, data);
    update(right, mid+1, e, i, data);
    tree[node] = tree[left] + tree[right];
}

int Query(int node, int b, int e, int i, int j)
{
    if(j<b || i>e)
        return 0;
    if(i<=b && j>=e)
    {
        return tree[node];
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (b+e)/2;

    int p1 = Query(left, b, mid, i, j);
    int p2 = Query(right, mid+1, e, i, j);

    return p1 + p2;
}

int main()
{
    int n, q, c, x, y, i, a;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a);
        arr[i] = a%2;
    }

    CounstructSegmentTree(1, 1, n);
//    cout<<"TREE -->>"<<endl;
//    for(i=1; i<=11; i++)
//        cout<<tree[i]<<"   ";
//    cout<<endl;

    scanf("%d", &q);

    while(q--)
    {
        scanf("%d %d %d", &c, &x, &y);
        if(c == 0)
            update(1, 1, n, x, y%2);
        else if(c == 1)
        {
            printf("%d\n", y-x+1-Query(1, 1, n, x, y));
        }
        else
            printf("%d\n", Query(1, 1, n, x, y));
    }

    return 0;
}
