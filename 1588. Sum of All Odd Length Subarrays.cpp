class Solution 
{
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int ans = 0;
        int n = arr.size();
        for(int i = 1; i <= n; i++)
        {
            ans += (((((n - i + 1) * (i)) + 1) / 2) * arr[i - 1]);
        }
        return ans;
    }
};
