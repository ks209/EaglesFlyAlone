class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0 ;

        vector<vector<bool>> seen (grid.size(),vector<bool>(grid[0].size(),false));

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){

                if(grid[i][j]=='1' and seen[i][j]==0){
                    count ++;
                    dfs(i,j,seen,grid);
                }
            }
        }

        return count;
    }

    void dfs(int i,int j, vector<vector<bool>>& seen, vector<vector<char>>& grid ){

        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()){
            return;
        }
        if(grid[i][j]=='0' || seen[i][j]==1){
            return;
        }
        seen[i][j]=1;
        if(i>0){
            dfs(i-1,j,seen,grid); 
        }

        if(i<grid.size()-1){
            dfs(i+1,j,seen,grid); 
        }
        if(j>0){
        dfs(i,j-1,seen,grid); 
        }

        if(j<grid[i].size()-1){
            dfs(i,j+1,seen,grid); 
        }
    }
};