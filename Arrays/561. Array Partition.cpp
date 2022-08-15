class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        priority_queue<int> p;
        for(int i = 0; i < nums.size(); i++)
        {
            p.push(nums[i]);
        }
        int ans = 0, n = nums.size() / 2;
        while(n--)
        {
            p.pop();
            ans += p.top();
            p.pop();
        }
        return ans;
    }
};
