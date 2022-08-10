class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        if(mat[0].size() % 2)
        {
            ans += mat[(mat[0].size()) / 2][(mat[0].size()) / 2];
        }
        int k = mat[0].size();
        int n = (mat[0].size()) / 2;
        for(int i = 0; i < n; i++)
        {
            ans += (mat[i][i] + mat[i][k - i - 1]) + (mat[k - i - 1][i] + mat[k - i - 1][k - i - 1]); 
        }
        return ans;
    }
};
