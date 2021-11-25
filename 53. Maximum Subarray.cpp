class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int cur_sum = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            cur_sum = max(cur_sum + nums[i], nums[i]);
            maxi = max(cur_sum, maxi);
        }
        
        return maxi;
    }
};
