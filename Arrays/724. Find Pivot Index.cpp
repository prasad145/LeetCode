class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            tot += nums[i];
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum == (tot - sum - nums[i]))
            {
                return i;
            }
            sum += nums[i];
        }
        return -1;
    }
};
