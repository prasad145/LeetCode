class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int, int> m;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0; i < rectangles.size(); i++)
        {
            mini = min(rectangles[i][0], rectangles[i][1]);
            maxi = max(maxi, mini);
            m[mini]++;
        }
        return m[maxi];
    }
};
