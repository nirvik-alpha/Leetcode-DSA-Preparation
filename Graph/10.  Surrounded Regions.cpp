class Solution {

private :
    void dfs(int r ,int c , vector<vector<int>> &vis ,vector<vector<char>> &mat , int delrow[] , int delcol[] ){
        
        int n = mat.size();
        int m = mat[0].size();
        
        vis[r][c] = 1;
        
        for(int i=0;i<4;i++)
        {
            int row = r + delrow[i];
            int col = c + delcol[i];
            
           if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && mat[row][col]=='O')
           {
               dfs(row,col,vis,mat,delrow,delcol);
           }
        }   
    }

public:
    void solve(vector<vector<char>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();

         int delrow[] = {-1 , 0 , +1 , 0 }; 
        int delcol[] = {0 , +1 , 0 ,-1 } ;
        
        vector<vector<int>> vis(n, vector<int>(m,0)); 
        
        for(int j=0;j<m;j++)
        {
            if(mat[0][j]=='O' && vis[0][j]==0)
            {
                dfs(0,j,vis,mat, delrow,delcol);
               
            }
            
            if(mat[n-1][j]=='O' && vis[n-1][j]==0)
            {
                dfs(n-1,j,vis,mat, delrow,delcol);
                
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(mat[i][0]=='O' && vis[i][0]==0)
            {
                dfs(i,0,vis,mat, delrow,delcol);
               
            }
            
             if(mat[i][m-1]=='O' && vis[i][m-1]==0)
            {
                dfs(i,m-1,vis,mat, delrow,delcol);
               
            }
            
        }
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='O' && vis[i][j]==0)
                {
                    mat[i][j] = 'X';
                }
            }
        }
        
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cout<<mat[i][j]<<" ";
           }
       }
    }
};

int main(){
    
    vector<vector<char>> mat{
        {'X', 'X', 'X', 'X'}, 
        {'X', 'O', 'X', 'X'}, 
        {'X', 'O', 'O', 'X'}, 
        {'X', 'O', 'X', 'X'}, 
        {'X', 'X', 'O', 'O'}
    };
    
    Solution ob;
    // n = 5, m = 4
    vector<vector<char>> ans = ob.fill(5, 4, mat);
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 4;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

