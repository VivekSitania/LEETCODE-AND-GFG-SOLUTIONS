class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        int k = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ' || i == s.size()-1)
            {
                if(i == s.size()-1)
                {
                    k = i;
                }
                else
                {
                    k = i-1;
                }
                
                //Swap
                while(j<k)
                {
                    char temp = s[k];
                    s[k] = s[j];
                    s[j] = temp;
                    j++;
                    k--;
                }
                j = i+1;
                k = i+1; // not so much useful
            }
        }
        
        return s;
    }
};