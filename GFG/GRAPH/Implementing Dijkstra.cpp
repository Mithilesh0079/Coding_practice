vector <int> dijkstra(vector<vector<int>> g, int src, int V)
{
   vector<int> dp(V, INT_MAX);
   bool visited[V];
   for(int i=0; i<V; i++)
   visited[i]= false;
   
   dp[src]=0;
   int i=0;
   while(true)
   {
       int m_index=0, minn= INT_MAX;
       for(int i=0; i<V; i++)
       {
           if(!visited[i] && dp[i]<minn)
           {
               minn= dp[i];
               m_index= i;
           }
       }
       visited[m_index]= true;
       
       if(minn==INT_MAX)
       break;
       for(int j=0; j<V; j++)
       {
           if(g[m_index][j]!=0)
           {
               dp[j]= min(dp[j], dp[m_index]+ g[m_index][j]);
           }
       }
   }
   return dp;
}
