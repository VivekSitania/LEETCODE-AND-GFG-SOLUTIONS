class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length=size(nums);
        for(int i=0;i<length;i++)
        {
            if(nums[i]>=target)
            {
                return i;
            }
        }
        return length;
        
    }
};