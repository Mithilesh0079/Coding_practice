class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n= grid.size();
        int m=grid[0].size();
       
        for (int i=0;i<n;i++)
            {
            for(int j=0;j<m;j++)
                {
                if(i>=1&&j>=1) 
                    grid[i][j]=min(grid[i-1][j], grid[i][j-1])+ grid[i][j];
                else if(i>=1)
                    grid[i][j]=grid[i-1][j]+ grid[i][j];
                else if(j>=1)
                    grid[i][j]= grid[i][j-1]+ grid[i][j];
                    
            }
        }
        
        return grid[n-1][m-1];
        
    }
};
