#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int arr[MAX], tree_min[4*MAX], tree_max[4*MAX];

void ConstructSegmentTree(int node, int b, int e)
{
    if(b == e)
    {
        tree_max[node] = arr[b];
        tree_min[node] = arr[b];
        return;
    }


    int left = 2*node;
    int right = 2*node + 1;
    int mid = (b+e)/2;

    ConstructSegmentTree(left, b, mid);
    ConstructSegmentTree(right, mid+1, e);

    tree_max[node] = max(tree_max[left], tree_max[right]);
    tree_min[node] = min(tree_min[left], tree_min[right]);
}

int Query_min(int node, int b, int e, int i, int j)
{
    if(j<b || i>e)
        return INT_MAX;
    if(i<=b && j>=e)
        return tree_min[node];
    int left = 2*node;
    int right = 2*node + 1;
    int mid = (b+e)/2;

    int p1 = Query_min(left, b, mid, i, j);
    int p2 = Query_min(right, mid+1, e, i, j);

    return min(p1, p2);
}

int Query_max(int node, int b, int e, int i, int j)
{
    if(j<b || i>e)
        return 0;
    if(i<=b && j>=e)
        return tree_max[node];
    int left = 2*node;
    int right = 2*node + 1;
    int mid = (b+e)/2;

    int p1 = Query_max(left, b, mid, i, j);
    int p2 = Query_max(right, mid+1, e, i, j);

    return max(p1, p2);
}

int main()
{
    int t, n ,d, i, j, max_dist, current_dist;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        max_dist = 0;
        scanf("%d %d", &n, &d);

        for(j=1; j<=n; j++)
        {
            scanf("%d", &arr[j]);
        }

        ConstructSegmentTree(1, 1, n);

        for(j=1; j<=n-d+1; j++)
        {
            current_dist = Query_max(1, 1, n, j, j+d-1) - Query_min(1, 1, n, j, j+d-1);
            if(current_dist>max_dist)
                max_dist = current_dist;
        }

        printf("Case %d: %d\n", i, max_dist);//tree_max[1]-tree_min[1]);
    }

    return 0;
}
