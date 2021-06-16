#include<bits/stdc++.h>

using namespace std;

#define max 100000

int arr[max], tree[4*max];

void ConstructSegmentTree(int node, int b, int e)
{
	if(b == e)
	{
		tree[node] = arr[b];
		return;
	}
	int left = 2*node;
	int right = 2*node+1;
	int mid = (b+e)/2;

	ConstructSegmentTree(left, b, mid);
	ConstructSegmentTree(right, mid+1, e);
	tree[node] = min(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j)
{
	if(i>e || j<b)
		return INT_MAX;
	if(i<=b && j>= e)
		return tree[node];
	int left = node*2;
	int right = node*2+1;
	int mid = (b+e)/2;

	int p1 = query(left, b, mid, i, j);
	int p2 = query(right, mid+1, e, i, j);

	return min(p1, p2);
}

int main()
{
	int t, n, q, i, j;

	scanf("%d", &t);

	for(int z=1; z<=t; z++)
	{
		scanf("%d %d", &n, &q);
		for(int y = 1; y<=n; y++)
		{
			scanf("%d", &arr[y]);
		}

		ConstructSegmentTree(1, 1, n);
//cout<<"tree"<<endl;
//for(int y=1; y<=4*n; y++)
//    cout<<tree[y]<<endl;

		printf("Case %d:\n", z);
		for(int y=1; y<=q; y++)
		{
			scanf("%d %d", &i, &j);
			printf("%d\n", query(1, 1, n, i, j));
		}
	}

	return 0;
}
