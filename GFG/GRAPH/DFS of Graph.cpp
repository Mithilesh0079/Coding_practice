void DFS(vector<int> g[], bool visited[], int i, vector<int> &ans)
{
    visited[i]= true;
    ans.push_back(i);
    for(int x= 0; x<g[i].size(); x++)
    {
        if(!visited[g[i][x]])
        DFS(g, visited, g[i][x], ans);
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    bool visited[N];
    for(int i=0; i<N; i++)
    visited[i]= false;
    vector<int> ans;
    for(int i=0; i<N; i++)
    {
        if(!visited[i])
        DFS(g, visited, i, ans);
    }
    return ans;
}
