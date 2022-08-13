class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
      unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int pairs = 0, rem = 0;
        for(auto &x : m)
        {
            pairs += (x.second / 2);
            rem += (x.second % 2);
        }
        vector<int> e = {pairs, rem};
        return e;
    }
};
