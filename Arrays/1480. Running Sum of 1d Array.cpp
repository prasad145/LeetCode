class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int tot = 0;
        for(int i = 0 ; i < nums.size(); i++) {
            tot += nums[i];
        }
        vector<int> ans(nums.size());
        ans[0] = nums[0];
        ans[nums.size() - 1] = tot;
        for(int i = nums.size() - 1; i > 1; i--)
        {
            tot -= nums[i];
            ans[i - 1] = tot;
        }
        return ans;
    }
};
