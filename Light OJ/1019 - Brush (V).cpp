#include <bits/stdc++.h>

using namespace std;

int N;

int minDistance(int dist[100], bool sptset[])
{
    int min_ = INT_MAX, min_index;

    for(int v=0; v<N; v++)
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
/*int printsolution(int dist[100])//, int parent[500])
{
    //int src = 0;

    for(int i=0; i<N; i++)
    {
        if(dist[i]==INT_MAX)
            printf("Impossible\n");
        else
            printf("%d\n", dist[i]);
    }
}*/


void dijkstra(int graph[100][100], int src)
{
    int dist[100];//, parent[500];
    bool sptset[100];
    //parent[src] = -1;

    for(int i=0; i<N; i++)
    {
        dist[i] = INT_MAX;
        sptset[i] = false;
    }
    dist[src] = 0;

    for(int count_=0; count_<N-1; count_++)
    {
        int u = minDistance(dist, sptset);
        sptset[u] = true;
//cout<<!sptset[1]<<" "<<graph[0][1]<<" "<<dist[0]<<" "<<dist[0]+graph[0][1]<<" "<<dist[1]<<endl;
        for(int v=0; v<N; v++)
        {
            if(!sptset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
            {
                dist[v]=dist[u]+graph[u][v];
                //parent[v] = u;
            }
        }
    }
    if(dist[N-1]==INT_MAX)
        printf("Impossible\n");
    else
        printf("%d\n", dist[N-1]);

    //printsolution(dist);//, parent);
}

int main()
{
    int T, M, u, v, w, t;
    scanf("%d", &T);

    for(int z=1; z<=T; z++)
    {
        //getchar();
        scanf("%d %d", &N, &M);

        int graph[100][100];
        memset(graph, 0, sizeof(graph));

        while(M--)
        {
            scanf("%d %d %d", &u, &v, &w);
            if(graph[u-1][v-1]!=0)
            {
                if(graph[u-1][v-1]<w)
                    continue;
            }
            graph[u-1][v-1] = w;
            graph[v-1][u-1] = w;
        }
        printf("Case %d: ", z);

        dijkstra(graph, 0);
    }

    return 0;
}
