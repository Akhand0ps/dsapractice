class Solution {

private:
    void bfs(int row, int col, vector<vector<int>>& vis,vector<vector<char>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        // vis[row][col] = 1;
        // queue<pair<int, int>> q;
        // q.push({row, col});
        vis[row][col]=1;
   queue<pair<int,int>>q;
   q.push({row,col});
        while(!q.empty()){
      
      int row = q.front().first;
      int col = q.front().second;

      q.pop();

      // now traverse all the 8 directions of node -1 to 1
      for(int delrow =-1;delrow<=+1;delrow++){
         for(int delcol = -1;delcol<=+1;delcol++){
            if((delrow==-1 && delcol==-1) || (delrow==-1&&delcol==1) || (delrow==1&&delcol==-1) || (delrow==1&&delcol==1)) continue;
            int nrow = delrow+row;
            int ncol = delcol+col;

            if(nrow >=0 && nrow < n && ncol>=0 && ncol<m 
            && grid[nrow][ncol] == '1' && !vis[nrow][ncol]){
               q.push({nrow,ncol});
               vis[nrow][ncol] =1;
            }
         }
      }
   }

        



        
        
    }

public:
    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {

                if (!vis[r][c] && grid[r][c] == '1') {
                    cnt++;
                    bfs(r, c, vis, grid);
                }
            }
        }

        return cnt;
    }
};