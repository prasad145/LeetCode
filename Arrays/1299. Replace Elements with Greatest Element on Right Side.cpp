class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> a(n, -1);
        if(n == 1)
            return a;
        int maxi = arr[n - 1];
        maxi = max(maxi, arr[n - 2]);
        a[n - 2] = arr[n - 1];
        for(int i = n - 3; i >= 0; i--)
        {
            a[i] = maxi;
            maxi = max(maxi, arr[i]);
        }
        return a;
    }
};
