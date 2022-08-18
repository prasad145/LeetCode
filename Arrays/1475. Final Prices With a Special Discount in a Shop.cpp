class Solution {
public:
    
    vector<int> finalPrices(vector<int>& p) {
        int n = p.size();
        stack<int> s;
        s.push(0);
        vector<int> v(n);
        for(int i = n - 1; i >= 0; i--)
        {
            int cur = p[i];
            while(s.top() > cur)
            {
                s.pop();
            }
            v[i] = cur - s.top();    
            s.push(p[i]);
        }
        return v;
    }
};
