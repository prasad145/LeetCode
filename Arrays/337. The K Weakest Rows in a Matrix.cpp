class Solution {
public:
    static int binarySearch(vector<int> v)
    {
        int l = 0, h = v.size() - 1;
        while(l <= h)
        {
            int m = l + ((h - l) / 2);
            if(v[m] == 0)
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        set<pair<int, int>> s;
        
        for(int i = 0; i < mat.size(); i++)
        {
            s.insert({binarySearch(mat[i]), i});
        }
        
        for(auto &x : s)
        {
            if(k--)
            {
                v.push_back(x.second);
            }
            else
            {
                break;
            }
        }
        return v;
    }
};
