class Solution {
public:
    bool checkPalindrome(string s)
    {
        string tmp = s;
        reverse(s.begin(), s.end());
        return (s == tmp) ? true : false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            if(checkPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};
