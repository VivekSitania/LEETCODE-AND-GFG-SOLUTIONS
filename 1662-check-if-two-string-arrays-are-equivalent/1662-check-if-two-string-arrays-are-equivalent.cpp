class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        //A string is represented by an array if the array elements concatenated in order forms the         string.(isko baad mai samghna)
        
        string w1;
        string w2;
        for(int i=0; i<word1.size(); i++)
        {
            w1= w1+word1[i];
        }
        
        for(int i=0; i<word2.size(); i++)
        {
            w2= w2+word2[i];
        }
        
        if(w1==w2)
        {
            return true;
        }
        
        return false;
    }
};