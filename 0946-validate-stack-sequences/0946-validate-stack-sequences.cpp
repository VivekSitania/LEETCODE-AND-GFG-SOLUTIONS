class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>validSequence;
        int len = pushed.size();
        int j=0;
        int i=0;
        while(i<len)
        {
            if(j<len && (validSequence.empty() || validSequence.top() != popped[i]))
            {
                validSequence.push(pushed[j]);
                j++;
            }
            else if(validSequence.top() == popped[i])
            {
                validSequence.pop();
                i++;
            }
            else
            {
                return false;
            }
        }
        
        return true;
    }
};