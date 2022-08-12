class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        stack<int> st;
        st.push(0);
        int maxi = INT_MIN;
        for(int i = 0; i < gain.size(); i++)
        {
            maxi = max(maxi, st.top());
            st.push(gain[i] + st.top());
        }
        maxi = max(maxi, st.top());
        return maxi;
    }
};
