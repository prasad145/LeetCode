class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int, int> s;
        for(int i = 0 ; i < nums.size(); i++)
        {
            s[nums[i]]++;
        }
        while(original <= 1000 && s[original])
        {
            original *= 2;
        }
        return original;
    }
};
