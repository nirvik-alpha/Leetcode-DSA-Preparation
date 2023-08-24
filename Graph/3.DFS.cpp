#include <bits/stdc++.h>
using namespace std;

class Solution {
  private: 
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls ) {
       
        vis[node] = 1; 
        ls.push_back(node); 
       
        for(auto it : adj[node]) {
         
            if(!vis[it]) {
                dfs(it, adj, vis, ls); 
            }
        }
    }
  public:
 
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       
        int vis[V] = {0}; 
        int start = 0;
                            // create a list to store dfs
        vector<int> ls; 
       
        dfs(start, adj, vis, ls); 
        return ls; 
      
    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[5];
    
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    Solution obj;
    vector <int> ans = obj.dfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}

-- > Time Complexity: For an undirected graph, O(N) + O(2E), For a directed graph, O(N) + O(E), 
  Because for every node we are calling the recursive function once, the time taken is O(N) and 2E 
  is for total degrees as we traverse for all adjacent nodes.

-- > Space Complexity: O(3N) ~ O(N), Space for dfs stack space, visited array and an adjacency list.
