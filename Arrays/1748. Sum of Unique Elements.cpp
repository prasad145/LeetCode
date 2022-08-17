class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto &x: mp)
        {
            if(x.second < 2)
            {
                ans += x.first;
            }
        }
        return ans;
    }
};
