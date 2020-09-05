bool dfs (bool visited[], int s, bool cycle[], vector<int> graph[], int V)
{
    visited[s]= true;
    cycle[s]=true;
    for(int i=0; i<graph[s].size(); i++){
        if(visited[graph[s][i]] && cycle[graph[s][i]])
          return true;
        if(!visited[graph[s][i]] && dfs(visited, graph[s][i], cycle,graph, V)) 
          return true;
    }
    cycle[s]= false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    bool visited[V];
    bool cycle[V];
    for(int i=0; i<V; i++){
        visited[i]= false;
        cycle[i]= false;
    }
    for(int i=0; i<V; i++){
        if(!visited[i] && dfs(visited, i, cycle, adj, V))
        return true;
    }
    return false;
}
