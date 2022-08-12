class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < (1 << nums.size()); i++)
        {
            int val = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if((i & (1 << j))) // ignores first row 
                {
                    val ^= nums[j];
                }
            }
            res += val;
        }
        return res;
    }
};
