class Solution {
public:
    string removeDuplicates(string s) {
        int len = s.size();
        string result = s;
        int j = -1;
        for(int i=0; i<len; i++)
        {
            // if(!st.empty() && s[i]=st.top()) st.pop();
            // else st.push(s[i]);
            if(j >= 0 && result[j] == s[i]) {
                j--;
        }
            else {
                j++;
                result[j] = s[i];
            }
        }
        
        return result.substr(0,j+1);
    }
};