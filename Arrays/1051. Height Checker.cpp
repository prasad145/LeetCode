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
            // cout << "executing while loop\n";
            while(m[k] == 0)
            {
                // cout << "m[k] = " << m[k] << '\n'; 
                ++k;
                // cout << k << "\n";
            }
            
            if(k != x)
            {
                // cout << "k != x :::: " << k << "---" << x << "\n";
                ans++;
            }
            // cout << "reducing "; 
            // cout << "value before" << m[k] << " ";
            --m[k];
            // cout << "value after" << m[k] << "\n";
        }
        return ans;
    }
};
