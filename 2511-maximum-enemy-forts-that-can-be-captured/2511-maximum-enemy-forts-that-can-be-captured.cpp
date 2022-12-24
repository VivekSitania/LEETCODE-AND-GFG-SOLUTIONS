class Solution {
public:
    int captureForts(vector<int>& forts) {
        int st_ele = 0;
        int st_pt = 0;
        int max_fort = 0;
        for(int i=0; i<forts.size(); i++)
        {
            if(forts[i] == 1 || forts[i] == -1)
            {
                if(forts[i] == -1*st_ele)
                {
                    max_fort = max(max_fort, i-st_pt-1);
                }
                st_ele = forts[i];
                st_pt = i;
            }
        }
        return max_fort;
    }
};