class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256];
        for(int i=0;i<256;i++)
        {
            arr[i]=-1;
        }
        int max_length=0;
        int start=0;
    //    if(s.size()==1)
     //   {
      //      return 1;
      //  }
        int i=0;
        for(;i<s.size();i++)
        {
            if(arr[s[i]]>=start)
            {
                int lengthofcurrentsubstring=i-start;
                start=arr[s[i]]+1;
                if(lengthofcurrentsubstring>max_length)
                {
                    max_length=lengthofcurrentsubstring;
                }
            }
                arr[s[i]]=i;
        }
        if((i-start) > max_length)
        {
            max_length=i-start;
        }
        return max_length;
    }
};