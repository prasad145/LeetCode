class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<vector<int>> v = {nums1, nums2, nums3};
        bool cnt[3][101] = {};
        for(int i = 0 ; i < v.size(); i++)
        {
            for(int n : v[i])
            {
                cnt[i][n] = true;
            }
        }
        vector<int> ans;
        for(int i = 1; i <= 100; i++)
        {
            int k = 0;
            for(int j = 0; j < 3; j++)
            {
                k += cnt[j][i];
                if(k > 1)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
