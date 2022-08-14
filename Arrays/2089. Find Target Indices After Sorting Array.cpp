class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt = 0, numsLesser = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target) 
                cnt++;
            if(nums[i] < target)
                numsLesser++;
        }
        
        vector<int> ans;
        for(int i = 0; i < cnt; i++)
        {
            ans.push_back(numsLesser++);
        }
        return ans;
    }
};
