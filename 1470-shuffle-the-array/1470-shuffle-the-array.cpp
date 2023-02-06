class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        int size_nums=size(nums);
        int output[size_nums];
        int j=0;
        for(int i=0;i<n;i++)
        {
            output[j]=nums[i];
            j++;
            j++;
        }
        j=1;
        for(int i=n;i<size_nums;i++)
        {
            output[j]=nums[i];
            j++;
            j++;
        }
        vector<int> shuffled_array(output,output +2*n);
        return shuffled_array;
      //  return output;
    }
};

































