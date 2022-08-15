class Solution {
public:
    vector<int> diStringMatch(string s) {
        int high = s.length(), low = 0, flag;
        vector<int> ans;
        if(s[s.length() - 1] == 'I')
            flag = high;
         else
            flag = low;
        if(flag == low)
        {
            low++;
        }
        else
        {
            high--;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'I')
                ans.push_back(low++);
            else
                ans.push_back(high--);
        }
        ans.push_back(flag);
        return ans;
    }
};
