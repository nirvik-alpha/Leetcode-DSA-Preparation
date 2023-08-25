class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {

      int n = grid.size();
	   int m = grid[0].size();
	   
	   vector<vector<int>>vis (n , vector<int>(m,0));
	   vector<vector<int>>dist(n, vector<int>(m,0));
	   
	   queue<pair<pair<int,int>,int>> q ;
	   
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<m;j++)
	       {
	           if(grid[i][j]==0)
	           {
	               q.push({{i,j},0});
	               vis[i][j] = 1;
	           }
	           else{
	               vis[i][j] = 0;
	           }
	       }
	   }
	   
	   int delrow[] = {-1,0,+1,0};
	   int delcol[] = {0,+1,0,-1};
	   
	   while(!q.empty())
	   {
	       int x = q.front().first.first;
	       int y = q.front().first.second;
	       int z = q.front().second;
	       q.pop();
	       dist[x][y] = z;
	       
	       for(int i=0;i<4;i++)
	       {
	           int row = x + delrow[i];
	           int col = y + delcol[i];
	           
	           if(row>=0 && row<n && col>=0 && col<m && vis[row][col] == 0)
	           {
	               vis[row][col] = 1;
	               q.push({{row,col} ,z+1});
	           }
	       }
	       
	   }
	   
	   return dist;

    }
};

int main(){
    vector<vector<int>>grid{
        {0,1,1,0},
        {1,1,0,0},
        {0,0,1,1}
    };
	
	Solution obj;
	vector<vector<int>> ans = obj.updateMatrix(grid);
		
	for(auto i: ans){
		for(auto j: i)
			cout << j << " ";
		cout << "\n";
	}
	
	return 0;
}

