class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int length=nums.size();
        int output[2];
        //sarch target from starting
        int a=0;
        for( ;a<length; a++)
        {
            if(nums[a]==target)
            {
                output[0]=a;
                break;
            }
        }
        if(a==length)
        {
            output[0]=-1;
            output[1]=-1;
            vector<int> result(output,output+2);
            return result;
        }
       
        for(int i=length-1;i>=output[0];i--)
        {
            if(nums[i]==target)
            {
                output[1]=i;
                break;
            }
        }
       
            vector<int> result(output,output+2);
            return result;
    }
};