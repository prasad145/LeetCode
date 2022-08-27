class Solution {
public:
    int heightChecker(vector<int>& h) {
        int ans = 0;
        int k = 1;
        map<int, int> m; 
        for(int x : h)
        {
            m[x]++;
        }
        for(int x : h)
        {
            while(m[k] == 0)
            {
                ++k;
            }
            
            if(k != x)
            {
                ans++;
            }
            --m[k];
        }
        return ans;
    }
};
