class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> freq;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            ans += freq[nums[i]]++;
        }
        return ans;
    }
};
