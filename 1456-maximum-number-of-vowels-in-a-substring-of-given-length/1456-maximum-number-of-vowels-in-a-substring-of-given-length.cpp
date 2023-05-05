class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVow = 0, res = 0;
        string vowels = "aeiou";
        auto isVow = [&](char ch){return vowels.find(ch) != string::npos;};
        
        for(int i = 0; i < s.length(); i++)
        {
            if(i >= k)maxVow -= isVow(s[i  - k]);
            maxVow += isVow(s[i]);
            res = max(res, maxVow);
        }

        return res;

    }
};