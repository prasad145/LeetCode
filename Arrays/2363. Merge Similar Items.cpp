class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        vector<vector<int>> ans;
        for(int j = 0; j < items1.size(); j++)
        {
            mp[items1[j][0]] += items1[j][1];
        }
        for(int j = 0; j < items2.size(); j++)
        {
            mp[items2[j][0]] += items2[j][1];
        }
        for(auto &x : mp)
        {
            ans.push_back({x.first, x.second});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
