class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int cnt = 0, odd = 0, even = 0;
        for(int i = 0; i < p.size(); i++)
        {
            if(p[i] % 2){
                odd++;
            }
            else{
                even++;
            }
        }
        return min(odd, even);
    }
};
