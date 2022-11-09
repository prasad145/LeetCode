class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> uam(k, 0);
        map<int, set<int>> userlog;
        
        for (int i = 0; i < logs.size(); i++)
        {
            userlog[logs[i][0]].insert(logs[i][1]);
        }
        
        for (auto x : userlog)
        {
            uam.at(userlog[x.first].size() - 1)++;
        }
        return uam;
    }
};
