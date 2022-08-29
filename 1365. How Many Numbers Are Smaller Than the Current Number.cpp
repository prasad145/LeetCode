class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums);
        sort(v.begin(), v.end());
        map<int, int> freq;
        for(int i = v.size() - 1; i >= 0; i--)
        {
            freq[v[i]] = i;
        }
        for(int i = 0; i < v.size(); i++)
        {
            nums[i] = freq[nums[i]];
        }
        return nums;
    }
};
