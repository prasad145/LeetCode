class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0, ini = capacity;
        for(int i = 0; i < plants.size(); i++)
        {
            if(capacity >= plants[i])
            {
                steps++;
            }
            else
            {
                steps += i ;
                steps += i + 1;
                capacity = ini;  
            }
            // cout << "steps " << i <<": " << steps << "\n";  
            capacity -= plants[i];
            // cout << "capacity " << i <<": " << capacity << "\n"; 
        }
        return steps;
    }
};
