class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    vector<int> row(grid.size(), 0), col(grid.size(), 0);
     for(int i = 0; i < grid.size(); i++)
     {
         int rowMax = -1, columnMax = -1;
         for(int j = 0; j < grid.size(); j++)
         {
            rowMax  = max(rowMax, grid[i][j]);
            columnMax = max(columnMax, grid[j][i]);   
         }
         row[i] = rowMax;
         col[i] = columnMax;
     }
     int tot = 0;
     for(int i = 0; i < grid.size(); i++)
     {
         for(int j = 0; j < grid.size(); j++)
         {
             tot += min(row[i], col[j]) - grid[i][j] ;
         }
     }
     return tot;
    }
};
