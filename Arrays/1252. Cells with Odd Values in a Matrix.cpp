class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        for(int i = 0; i < indices.size(); i++)
        {
            row[indices[i][0]] = !row[indices[i][0]];
            col[indices[i][1]] = !col[indices[i][1]];
        }
        
        int oddRow = 0, evenRow = 0, oddCol = 0, evenCol = 0;
        for(int i = 0; i < m; i++)
        {
            if(row[i]%2)
            {
                oddRow++;
            }
            else
            {
                evenRow++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(col[i]%2)
            {
                oddCol++;
            }
            else
            {
                evenCol++;
            }
        }
        
        return (oddRow * evenCol) + (oddCol * evenRow);
    }
};
