class Solution {
public:
    bool isValid(string s) {
        stack<char>isValid;
        int len = s.size();
        
        for(int i=0; i<len; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') isValid.push(s[i]);
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if(isValid.empty() || abs(s[i] - isValid.top()) > 2) return false;
                else isValid.pop();
            }   
        }
        
        return isValid.empty();
    }
};