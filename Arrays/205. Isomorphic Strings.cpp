class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> freq;
        set<char> ss;
        for(int i = 0; i < s.length(); i++)
        {
            if(freq.find(s[i]) != freq.end())
            {
                if(freq[s[i]] != t[i])
                {
                    return false;
                }
            }
            else
            {
                if(ss.find(t[i]) != ss.end())
                    return false;
                freq[s[i]] = t[i];
                ss.insert(t[i]);
            }
        }
        return true;
    }
};
