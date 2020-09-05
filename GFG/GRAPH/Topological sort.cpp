void dfs(bool visited[], vector<int> graph[], int s, vector<int> &ans)
{
    visited[s]= true;
    for(int i=0; i<graph[s].size(); i++)
    {
        if(!visited[graph[s][i]])
        dfs(visited, graph, graph[s][i], ans);
    }
    ans.push_back(s);
}
vector<int> topoSort(int V, vector<int> adj[]) {
   
   bool visited[V];
   for(int i=0; i<V; i++)
   visited[i]= false;
   
   vector<int> ans;
   for(int i=0; i<V; i++)
   {
       if(!visited[i])
       dfs(visited, adj, i, ans);
   }
   reverse(ans.begin(), ans.end());
   return ans;
}
