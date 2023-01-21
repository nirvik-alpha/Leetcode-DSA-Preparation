//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    void BFS(int node , vector<int>adj[] , int vis[] , vector<int>&ls)
    {
        vis[node] = 1;
        ls.push_back(node);
        
        for(auto u : adj[node])
        {
            if(!vis[u])
            {
                BFS(u, adj, vis, ls);
            }
            
        }
    }
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        int Vis[V] ={0};
        int start = 0 ; 
        
        vector<int>ls;
        BFS(start, adj , Vis, ls);
        
        
        
        return ls;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends