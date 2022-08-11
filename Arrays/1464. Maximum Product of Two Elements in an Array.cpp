class Solution {
public:
    int maxProduct(vector<int>& n) {
        int m1 = INT_MIN, m2 = m1;
        for(int i = 0; i < n.size(); i++)
        {
            if(n[i] > m1)
            {
                m2 = m1;
                m1 = n[i];
            }
            else if(n[i] > m2)
            {
                m2 = n[i];
            }
        }
        return (m1 - 1) * (m2 - 1);
    }
};
