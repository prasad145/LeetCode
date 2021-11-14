class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> freq;
        freq['I'] = 1;
        freq['V'] = 5;
        freq['X'] = 10;
        freq['L'] = 50;
        freq['C'] = 100;
        freq['D'] = 500;
        freq['M'] = 1000;
        
        int ans = freq[s[s.length() - 1]];
        
        for(int i = s.length() - 2; i >= 0; i--)
        {
            if(freq[s[i]] < freq[s[i + 1]])
            {
                ans -= freq[s[i]];
            }
            else
            {
                ans += freq[s[i]];
            }
        }
        
        return ans;
    }
};
