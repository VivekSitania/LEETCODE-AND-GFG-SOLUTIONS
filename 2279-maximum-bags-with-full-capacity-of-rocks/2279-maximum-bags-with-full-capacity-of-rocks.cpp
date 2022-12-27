class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i=0; i<rocks.size();i++)
        {
            rocks[i]=capacity[i]-rocks[i];
        }
        sort(rocks.begin(), rocks.end());
        
        int full_bag=0;
        for(int i=0; i<rocks.size();i++)
        {
            if(rocks[i]==0)
            {
                full_bag++;
            }
            
            else
            {
                additionalRocks-=rocks[i];
                if(additionalRocks>=0)
                {
                   full_bag++; 
                }
                else
                {
                    break;
                }  
            }
        }
        return full_bag;
    }
};