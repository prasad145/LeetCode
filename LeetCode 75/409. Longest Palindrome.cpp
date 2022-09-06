class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        int even = 0, odd = 0;
        int flag = 0;
        for(auto &x : freq){
            if(x.second % 2){
                flag = 1;
                odd += (x.second - 1);
            }
            else{
                even += x.second;
            }
        }
        if(flag != 0)
            return even + odd + 1;
        else
            return even + odd;
    }
};
