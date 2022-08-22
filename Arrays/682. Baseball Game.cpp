class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int> ss;
        ss.push(stoi(s[0]));
        for(int i = 1; i < s.size(); i++)
        {
           if(s[i] == "C")
           {
               ss.pop();
           }
           else if(s[i] == "D")
           {
               ss.push(ss.top() * 2);
           }
           else if(s[i] == "+")
           {
               int a = ss.top();
               ss.pop();
               int b = ss.top();
               int c = a + b;
               ss.push(a);
               ss.push(c);
           }
           else
           {
               ss.push(stoi(s[i]));
           }
        }
        int ans = 0;
        while(!ss.empty())
        {
            ans += (ss.top());
            ss.pop();
        }
        return ans;
    }
};
