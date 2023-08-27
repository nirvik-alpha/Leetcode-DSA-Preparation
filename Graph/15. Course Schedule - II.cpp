class Solution {

private: 
bool dfs( stack<int>& st , int node , vector<int>adj[], vector<int> &path , vector<int> &vis)
{
    vis[node]= 1;
    path[node] = 1;

    for(auto u : adj[node])
    {
        if(!vis[u])
        {
            if(dfs(st,u,adj,path,vis)==true) return true;
        }
        else if(path[u])
        {
            return true;
        }
    }

    path[node]=0;
    st.push(node);
    return false;


}

public:
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {
        
         stack<int>st;
       vector <int> vis(V, 0);
        vector<int>adj[V];
       vector<int>path(V,0) ;

         for(auto i:prerequisites)
            adj[i[1]].push_back(i[0]);

        vector<int> ans;
        for(int i=0;i<V;i++)   
        {
            if(!vis[i])
            {
                if(dfs(st,i,adj,path,vis)==true)
                 return ans;
            }
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }


        return ans;

    }
};
