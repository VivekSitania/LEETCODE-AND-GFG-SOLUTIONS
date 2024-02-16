class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int peak = -1;
        int size = nums.size();
        
        for(int i=0; i<size; i++)
        {
            if((i == 0 || nums[i] > nums[i-1]) && (i == size-1 || nums[i] > nums[i+1]))
            {
                return i;
            }
        }
        
        return -1;
    }
};