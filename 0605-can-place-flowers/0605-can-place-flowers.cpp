class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       
        //iss q ko aache se karna mai ajeeb dhang se kai huu islia
       
        if(n==0) //  ye test case aatka islia
        {
            return true;
        }
       
        int length=flowerbed.size();
        if(length==1)
        {
            if(n==1 && flowerbed[0]==0)
            {
                return true;
            }
            return false;
        }

        // for length>1;
        if(flowerbed[0]==0 && flowerbed[1]!=1)
        {
            flowerbed[0]=1;
            n--;
            if(n==0)
            {
                return true;
            }
        }
       
        for(int i=1; i<length-1; i++)
        {
            if(flowerbed[i]==0)
            {
                if(flowerbed[i-1]!=1 && flowerbed[i+1]!=1)
                {
                    flowerbed[i]=1;
                     n--;
                     if(n==0)
                     {
                         return true;
                     }
                }
            }
        }
       
        if(flowerbed[length-1]==0 && flowerbed[length-2]!=1)
        {
            flowerbed[length-1]=1;
            n--;
            if(n==0)
            {
                return true;
            }
        }
       
        return false;
    }
};