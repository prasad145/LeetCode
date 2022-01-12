class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for(int i = 0; i < s.length(); i++)
        {
            indices[i] = s[indices[i]];
        }
        
        string ans = "";
        for(int i = 0; i < indices.size(); i++)
        {
            ans += indices[i];
        }
        
        return ans;
    }
};
