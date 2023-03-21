class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        int count_zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count_zero++;
                count += count_zero;
            }
            else
            {
                count_zero=0;
            }
        }
        return count;
    }
};