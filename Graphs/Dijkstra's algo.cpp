#include <bits/stdc++.h>

using namespace std;

const int inf=1e7;

int main()
{
    int n,m;
    cout<<"enter no of nodes and no of edges"<<endl;
    cin>>n>>m;
    vector<vector<pair<int,int>>>edges(n+1);
    vector<int>dist(n+1,inf);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges[u].push_back({v,w});
        edges[v].push_back({u,w});
    }
    int src;
    cout<<"enter the source node"<<endl;
    cin>>src;
    dist[src]=0;
    set<pair<int,int>>s;
    s.insert({0,src});
    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);
        for(auto it:edges[x.second])
        {
            if(dist[it.first] > dist[x.second]+ it.second)
            {
                s.erase({dist[it.first],it.first});
                dist[it.first]=dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    cout<<"single source shortest path is"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(dist[i]<inf)
        {
            cout<<dist[i]<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
    }
    return 0;
}
