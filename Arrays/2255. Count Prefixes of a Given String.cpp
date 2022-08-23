class Solution {
public:
    bool compare(int r, string s, string k)
    {
        int l = 0;
        while(l <= r){
            if(s[l] != k[l] || s[r] != k[r]){
                return false;
            }
            l++, r--;
        }
        return true;
    }
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            if((words[i].length() == 1) && (words[i][0] == s[0])){
                ans++;
            }
            else{
                if(compare(words[i].length() - 1, words[i], s)){
                    ans++;
                }
            }
        }
        return ans;
    }
};
