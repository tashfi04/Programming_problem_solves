
#include <bits/stdc++.h>

using namespace std;

int n;

int minDistance(int dist[500], bool sptset[])
{
    int min_ = INT_MAX, min_index;

    for(int v=0; v<n; v++)
    {
        if(sptset[v]==false && dist[v]<=min_)
        {
            min_ = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

/*void printpath(int parent[500], int j)
{
    if(parent[j]==-1)
        return 0;
    printpath(parent(parent, parent[j]));

    printf("%d ", j);
}*/
int printsolution(int dist[500])//, int parent[500])
{
    //int src = 0;

    for(int i=0; i<n; i++)
    {
        if(dist[i]==INT_MAX)
            printf("Impossible\n");
        else
            printf("%d\n", dist[i]);
    }
}


void dijkstra(int graph[500][500], int src)
{
    int dist[500];//, parent[500];
    bool sptset[500];

    //parent[src] = -1;

    for(int i=0; i<n; i++)
    {
        dist[i] = INT_MAX;
        sptset[i] = false;
    }
    dist[src] = 0;

    for(int count_=0; count_<n-1; count_++)
    {
        int u = minDistance(dist, sptset);
        sptset[u] = true;

        for(int v=0; v<n; v++)
        {
            if(!sptset[v] && graph[u][v] && dist[u]!=INT_MAX && graph[u][v]<dist[v] && dist[u]<dist[v])
            {
                if(graph[u][v]>dist[u])
                    dist[v] = graph[u][v];
                else
                    dist[v] = dist[u];
                //parent[v] = u;
            }
        }
    }

    printsolution(dist);//, parent);
}

int main()
{
    int T, m, u, v, w, t;
    scanf("%d", &T);

    for(int z=1; z<=T; z++)
    {
        //getchar();
        scanf("%d %d", &n, &m);

        int graph[500][500];
        memset(graph, 0, sizeof(graph));

        while(m--)
        {
            scanf("%d %d %d", &u, &v, &w);
            if(graph[u][v]!=0)
            {
                if(graph[u][v]<w)
                    continue;
            }
            graph[u][v] = w;
            graph[v][u] = w;
        }
        scanf("%d", &t);
        printf("Case %d:\n", z);

        dijkstra(graph, t);
    }

    return 0;
}
