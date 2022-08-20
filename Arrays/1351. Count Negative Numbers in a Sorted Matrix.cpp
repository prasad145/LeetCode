class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            cnt += upper_bound(grid[i].rbegin(), grid[i].rend(), -1) - grid[i].rbegin();
        }
        return cnt;
    }
};
