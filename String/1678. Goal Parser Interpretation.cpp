class Solution {
public:
    string interpret(string command) {
        int i = 0;
        string ans = "";
        while(i < command.length())
        {
            if(command[i] == '(' && command[i + 1] == ')')
            {
                ans += 'o';
                i++;
            }
            else if(command[i] == '(' && command[i + 1] == 'a'){
                ans += "al";
                i += 3;
            }
            else if(command[i] == 'G')
            {
                ans += "G";
            }
            i++;
        }
        return ans;
    }
};
