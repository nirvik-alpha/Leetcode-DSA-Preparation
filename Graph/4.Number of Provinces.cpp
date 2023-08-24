class Solution {
  public:
  
  void dfs(vector<vector<int>>& adj , int V , vector<int>&visited , int src)
  {
      visited[src] = 1;
      for(int i=0;i<V;i++)
      {
          if(adj[src-1][i]==1)
          {
              if(visited[i+1]==0)
              {
                  dfs(adj,V,visited,i+1);
              }
          }
      }
      
  }
  
  
    int numProvinces(vector<vector<int>> adj, int V) {
       
        vector<int> visited(V+1,0);
        int ans = 0;
        for(int i =1;i<=V;i++)
        {
            if(visited[i] == 0)
            {
                ans++;
                dfs(adj,V,visited,i);
            }
        }
        return ans;
    }
};
